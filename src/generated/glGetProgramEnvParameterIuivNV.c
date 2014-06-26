#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramEnvParameterIuivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramEnvParameterIuivNV_Idx))


GLAPI void  APIENTRY glGetProgramEnvParameterIuivNV(GLenum target,GLuint index,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramEnvParameterIuivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramEnvParameterIuivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramEnvParameterIuivNV_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIuivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterIuivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramEnvParameterIuivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramEnvParameterIuivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramEnvParameterIuivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramEnvParameterIuivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterIuivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIuivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIuivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterIuivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIuivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterIuivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterIuivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramEnvParameterIuivNV_Idx) = get_ts();
        }


	

}