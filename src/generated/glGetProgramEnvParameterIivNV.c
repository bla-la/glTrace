#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramEnvParameterIivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramEnvParameterIivNV_Idx))


GLAPI void  APIENTRY glGetProgramEnvParameterIivNV(GLenum target,GLuint index,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramEnvParameterIivNV_Idx))
	{
            GL_ENTRY_PTR(glGetProgramEnvParameterIivNV_Idx) = dlsym(RTLD_NEXT,"glGetProgramEnvParameterIivNV");
            if(!GL_ENTRY_PTR(glGetProgramEnvParameterIivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramEnvParameterIivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramEnvParameterIivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramEnvParameterIivNV_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterIivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramEnvParameterIivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramEnvParameterIivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramEnvParameterIivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramEnvParameterIivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterIivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterIivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterIivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramEnvParameterIivNV_Idx) = get_ts();
        }


	

}