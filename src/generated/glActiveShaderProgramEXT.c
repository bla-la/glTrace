#include <glTraceCommon.h>
#include <generated.h>

#define glActiveShaderProgramEXT_wrp						\
    ((void  (*)(GLuint pipeline,GLuint program                                        \
    ))GL_ENTRY_PTR(glActiveShaderProgramEXT_Idx))


GLAPI void  APIENTRY glActiveShaderProgramEXT(GLuint pipeline,GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glActiveShaderProgramEXT_Idx))
	{
            GL_ENTRY_PTR(glActiveShaderProgramEXT_Idx) = dlsym(RTLD_NEXT,"glActiveShaderProgramEXT");
            if(!GL_ENTRY_PTR(glActiveShaderProgramEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glActiveShaderProgramEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glActiveShaderProgramEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glActiveShaderProgramEXT_wrp(pipeline,program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glActiveShaderProgramEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glActiveShaderProgramEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glActiveShaderProgramEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glActiveShaderProgramEXT_Idx),
				 GL_ENTRY_LAST_TS(glActiveShaderProgramEXT_Idx));
        if(last_diff > 1000000000){
            printf("glActiveShaderProgramEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glActiveShaderProgramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glActiveShaderProgramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glActiveShaderProgramEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glActiveShaderProgramEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glActiveShaderProgramEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glActiveShaderProgramEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glActiveShaderProgramEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glActiveShaderProgramEXT_Idx) = get_ts();
        }


	

}