#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramEnvParameterfvARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetProgramEnvParameterfvARB_Idx))


GLAPI void  APIENTRY glGetProgramEnvParameterfvARB(GLenum target,GLuint index,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramEnvParameterfvARB_Idx))
	{
            GL_ENTRY_PTR(glGetProgramEnvParameterfvARB_Idx) = dlsym(RTLD_NEXT,"glGetProgramEnvParameterfvARB");
            if(!GL_ENTRY_PTR(glGetProgramEnvParameterfvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramEnvParameterfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramEnvParameterfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramEnvParameterfvARB_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramEnvParameterfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramEnvParameterfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramEnvParameterfvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramEnvParameterfvARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramEnvParameterfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramEnvParameterfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramEnvParameterfvARB_Idx) = get_ts();
        }


	

}