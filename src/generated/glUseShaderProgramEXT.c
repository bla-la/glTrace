#include <glTraceCommon.h>
#include <generated.h>

#define glUseShaderProgramEXT_wrp						\
    ((void  (*)(GLenum type,GLuint program                                        \
    ))GL_ENTRY_PTR(glUseShaderProgramEXT_Idx))


GLAPI void  APIENTRY glUseShaderProgramEXT(GLenum type,GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUseShaderProgramEXT_Idx))
	{
            GL_ENTRY_PTR(glUseShaderProgramEXT_Idx) = dlsym(RTLD_NEXT,"glUseShaderProgramEXT");
            if(!GL_ENTRY_PTR(glUseShaderProgramEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUseShaderProgramEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glUseShaderProgramEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUseShaderProgramEXT_wrp(type,program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUseShaderProgramEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUseShaderProgramEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glUseShaderProgramEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUseShaderProgramEXT_Idx),
				 GL_ENTRY_LAST_TS(glUseShaderProgramEXT_Idx));
        if(last_diff > 1000000000){
            printf("glUseShaderProgramEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUseShaderProgramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUseShaderProgramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUseShaderProgramEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glUseShaderProgramEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUseShaderProgramEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUseShaderProgramEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUseShaderProgramEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUseShaderProgramEXT_Idx) = get_ts();
        }


	

}