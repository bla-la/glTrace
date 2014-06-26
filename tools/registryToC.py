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


def makeTemplate(template,out,param):
    templateFile = open(template)
    template = string.Template(templateFile.read())

    result = template.substitute(param)

    wrTo = open(out,'w')
    wrTo.write(result)
    wrTo.close()


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

    comm = libxml2.parseDoc(xml)
    commCtxt = comm.xpathNewContext()



    p = getProcParamAndName(commCtxt.xpathEval("//proto")[0].content)

    retType = p[0]
    name = p[1]
    is_void = isVoid(retType)

    paramPars = commCtxt.xpathEval("//param")
    for i in paramPars:
        paramName = ''
        paramDeclare = str(i.content)

        paramName = getParamName(i.content)


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

    if paramStr is None:
        return None

    makeTemplate('./template/glFuncTemplate.tmpl',
             './src/generated/'+proc[1]+'.c',
             {'procRet':proc[0],'procName':proc[1],
              'paramStr':paramStr,'paramCallStr':paramCallStr,
              'retVal':retVal,'ret':retStmt,'procNameWrp':proc[1]+'_wrp',
              'procNameIdx':proc[1]+"_Idx"})

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

    comm = libxml2.parseDoc(str(ch))
    commCtxt = comm.xpathNewContext()
    tmp = commCtxt.xpathEval("//proto")[0].content.split(' ')[1].split('*')
    if len(tmp) == 1:
        name = tmp[0]
    else:
        name = tmp[1]
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


makeTemplate('./template/generated.h.tmpl',
             './include/generated.h',
             {'procIdx':procIdx,'procPrototype':procPrototype})

makeTemplate('./template/glEntry.c.tmpl',
             './src/generated/glEntry.c',
             { 'procDeclare':procDeclare})

makeTemplate('./template/glXGetProcAddress.c.tmpl',
             './src/generated/glXGetProcAddress.c',
             {'procBind':procBind})
