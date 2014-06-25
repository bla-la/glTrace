#include <glTraceCommon.h>
#include <generated.h>

#define glCreateShaderProgramEXT_wrp						\
    ((GLuint  (*)(GLenum type,const GLchar *string                                        \
    ))GL_ENTRY_PTR(glCreateShaderProgramEXT_Idx))


GLAPI GLuint  APIENTRY glCreateShaderProgramEXT(GLenum type,const GLchar *string)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCreateShaderProgramEXT_Idx))
	{
            GL_ENTRY_PTR(glCreateShaderProgramEXT_Idx) = dlsym(RTLD_NEXT,"glCreateShaderProgramEXT");
            if(!GL_ENTRY_PTR(glCreateShaderProgramEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCreateShaderProgramEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCreateShaderProgramEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glCreateShaderProgramEXT_wrp(type,string);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCreateShaderProgramEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCreateShaderProgramEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCreateShaderProgramEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCreateShaderProgramEXT_Idx),
				 GL_ENTRY_LAST_TS(glCreateShaderProgramEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCreateShaderProgramEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCreateShaderProgramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShaderProgramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShaderProgramEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCreateShaderProgramEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCreateShaderProgramEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCreateShaderProgramEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCreateShaderProgramEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCreateShaderProgramEXT_Idx) = get_ts();
        }


	return retval;

}