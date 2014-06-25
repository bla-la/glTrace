#!/usr/bin/python
import sys
import libxml2
import string

needProcs = []

hide = ['glCreateSyncFromCLeventARB',
            'glDebugMessageCallbackARB',
            'glDebugMessageCallbackKHR',
            'glEGLImageTargetRenderbufferStorageOES',
            'glEGLImageTargetTexture2DOES',
            'glSampleCoveragex',
            'glSampleCoveragexOES']


def getParamName(declare):
    pos = -1
    for i in declare:
        if declare[pos] == ' ' or declare[pos] == '*':
            break;
        pos -= 1
    name = declare[pos+1:]
    return name

def getProcParamAndName(declare):
    pos = -1

    for i in declare:
        if declare[pos] == ' ' or declare[pos] == '*':
            break;
        pos -= 1
    name = declare[pos+1:]
    ret = declare[:pos+1]
    return [ret,name]

def isVoid(retType):
    ret = 0
    if 'void' in retType and '*' not in retType:
        ret = 1
    return ret


def parseCommand(xml):
    name = ''
    retType = ''
    is_void = 1
    params = []
    #print('parse comm:\n'+xml)
    comm = libxml2.parseDoc(xml)
    commCtxt = comm.xpathNewContext()
    tmp = commCtxt.xpathEval("//proto")[0].content.split(' ')[1].split('*')
    print(commCtxt.xpathEval("//proto")[0].content)

    p = getProcParamAndName(commCtxt.xpathEval("//proto")[0].content)

    retType = p[0]
    name = p[1]
    is_void = isVoid(retType)

    paramPars = commCtxt.xpathEval("//param")
    for i in paramPars:
#        print('parse: '+str(i.content))
        paramName = ''
        paramDeclare = str(i.content)

        tmp = i.content.split(' ')
        paramName = getParamName(i.content)


        #print('declare: '+ paramDeclare + ' name: '+paramName)
        params.append([paramDeclare,paramName])

    proc = [retType,name,params]

    paramStr = None
    paramCallStr = None
    for i in proc[2]:
        if paramStr is None:
            paramStr = i[0]
            paramCallStr = i[1]
        else:
            paramStr += ','+i[0]
            paramCallStr += ','+i[1]
    if is_void == 1:
        retVal = ''
        retStmt = ''
    else:
        retVal = proc[0]+ ' retval = '
        retStmt  = 'return retval;'

    #print(proc[0] + ' '+proc[1]+'('+paramStr+');')
    if paramStr is None:
        return None

    tf = open('template/glFuncTemplate.tmpl')
    template = string.Template( tf.read() )

    d = { 'procRet':proc[0],'procName':proc[1],
          'paramStr':paramStr,'paramCallStr':paramCallStr,
          'retVal':retVal,'ret':retStmt,'procNameWrp':proc[1]+'_wrp',
          'procNameIdx':proc[1]+"_Idx"}
    result = template.substitute(d)
 #   print(result)
    wrTo = open('./src/generated/'+proc[1]+'.c','w')
    wrTo.write(result)
    wrTo.close()

    return [proc[0],proc[1],paramStr]

try:
    srcFile = sys.argv[1]
    outDir = sys.argv[2]
except:
    print("Usage prog <file to parsing.xml> <outDirectory>")
    exit(1)



data = libxml2.parseFile(srcFile)
ctxt = data.xpathNewContext()
res = ctxt.xpathEval("//commands/command")

procs = []

for ch in res:

    #print("ch: "+str(ch))
    comm = libxml2.parseDoc(str(ch))
    commCtxt = comm.xpathNewContext()
    tmp = commCtxt.xpathEval("//proto")[0].content.split(' ')[1].split('*')
    if len(tmp) == 1:
        name = tmp[0]
    else:
        name = tmp[1]
    #for i in name:
    #print("name: "+str(name))
    #glGetBufferPointerv
#    if name in needProcs:
#    if 'glGetBufferPointerv' in name:
    if name not in hide:
        procDef = parseCommand(str(ch))
        if procDef is not None:
            procs.append(procDef)

procIdx = ''
procDeclare = ''
procPrototype = ''
procBind = ''

for i in procs:
    procIdx += '\t\t'+i[1]+'_Idx,\n'
    procDeclare += '\t\tDECLARE_CALL_ENTRY("'+i[1]+'"),\n'

    try:
        procPrototype += 'GLAPI  '+i[0]+ ' APIENTRY '+i[1]+'('+i[2]+');\n'
    except:
        print(str(i))
        exit(1)
    procBind += 'else if(!strcmp("'+i[1]+'",procName)) return (void *)'+i[1]+';\n'

tf = open('template/generated.h.tmpl')
template = string.Template( tf.read() )

d = { 'procIdx':procIdx,'procPrototype':procPrototype}
result = template.substitute(d)
#print(result)
wrTo = open('./include/generated.h','w')
wrTo.write(result)
wrTo.close()

tf = open('template/glEntry.c.tmpl')
template = string.Template( tf.read() )

d = { 'procDeclare':procDeclare}
result = template.substitute(d)
#print(result)
wrTo = open('./src/generated/glEntry.c','w')
wrTo.write(result)
wrTo.close()


tf = open('template/glXGetProcAddress.c.tmpl')
template = string.Template( tf.read() )

d = { 'procBind':procBind}
result = template.substitute(d)
#print(result)
wrTo = open('./src/generated/glXGetProcAddress.c','w')
wrTo.write(result)
wrTo.close()
