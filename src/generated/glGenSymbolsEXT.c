#include <glTraceCommon.h>
#include <generated.h>

#define glGenSymbolsEXT_wrp						\
    ((GLuint  (*)(GLenum datatype,GLenum storagetype,GLenum range,GLuint components                                        \
    ))GL_ENTRY_PTR(glGenSymbolsEXT_Idx))


GLAPI GLuint  APIENTRY glGenSymbolsEXT(GLenum datatype,GLenum storagetype,GLenum range,GLuint components)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenSymbolsEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenSymbolsEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGenSymbolsEXT_wrp(datatype,storagetype,range,components);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenSymbolsEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenSymbolsEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenSymbolsEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenSymbolsEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenSymbolsEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGenSymbolsEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenSymbolsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenSymbolsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenSymbolsEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenSymbolsEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenSymbolsEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenSymbolsEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenSymbolsEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenSymbolsEXT_Idx) = get_ts();
        }


	return retval;

}