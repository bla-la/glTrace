#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramLocalParameterdvARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetProgramLocalParameterdvARB_Idx))


GLAPI void  APIENTRY glGetProgramLocalParameterdvARB(GLenum target,GLuint index,GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramLocalParameterdvARB_Idx))
	{
            GL_ENTRY_PTR(glGetProgramLocalParameterdvARB_Idx) = dlsym(RTLD_NEXT,"glGetProgramLocalParameterdvARB");
            if(!GL_ENTRY_PTR(glGetProgramLocalParameterdvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramLocalParameterdvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramLocalParameterdvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramLocalParameterdvARB_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramLocalParameterdvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterdvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramLocalParameterdvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramLocalParameterdvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramLocalParameterdvARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramLocalParameterdvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterdvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterdvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramLocalParameterdvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterdvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterdvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramLocalParameterdvARB_Idx) = get_ts();
        }


	

}