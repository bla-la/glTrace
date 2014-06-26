#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramEnvParameterdvARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetProgramEnvParameterdvARB_Idx))


GLAPI void  APIENTRY glGetProgramEnvParameterdvARB(GLenum target,GLuint index,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramEnvParameterdvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramEnvParameterdvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramEnvParameterdvARB_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramEnvParameterdvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterdvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramEnvParameterdvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramEnvParameterdvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramEnvParameterdvARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramEnvParameterdvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterdvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterdvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramEnvParameterdvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramEnvParameterdvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramEnvParameterdvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramEnvParameterdvARB_Idx) = get_ts();
        }


	

}