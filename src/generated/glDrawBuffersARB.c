#include <glTraceCommon.h>
#include <generated.h>

#define glDrawBuffersARB_wrp						\
    ((void  (*)(GLsizei n,const GLenum *bufs                                        \
    ))GL_ENTRY_PTR(glDrawBuffersARB_Idx))


GLAPI void  APIENTRY glDrawBuffersARB(GLsizei n,const GLenum *bufs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawBuffersARB_Idx))
	{
            GL_ENTRY_PTR(glDrawBuffersARB_Idx) = dlsym(RTLD_NEXT,"glDrawBuffersARB");
            if(!GL_ENTRY_PTR(glDrawBuffersARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawBuffersARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawBuffersARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawBuffersARB_wrp(n,bufs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawBuffersARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawBuffersARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawBuffersARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawBuffersARB_Idx),
				 GL_ENTRY_LAST_TS(glDrawBuffersARB_Idx));
        if(last_diff > 1000000000){
            printf("glDrawBuffersARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawBuffersARB_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersARB_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffersARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawBuffersARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawBuffersARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawBuffersARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawBuffersARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawBuffersARB_Idx) = get_ts();
        }


	

}