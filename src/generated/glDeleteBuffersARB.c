#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteBuffersARB_wrp						\
    ((void  (*)(GLsizei n,const GLuint *buffers                                        \
    ))GL_ENTRY_PTR(glDeleteBuffersARB_Idx))


GLAPI void  APIENTRY glDeleteBuffersARB(GLsizei n,const GLuint *buffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteBuffersARB_Idx))
	{
            GL_ENTRY_PTR(glDeleteBuffersARB_Idx) = dlsym(RTLD_NEXT,"glDeleteBuffersARB");
            if(!GL_ENTRY_PTR(glDeleteBuffersARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteBuffersARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteBuffersARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteBuffersARB_wrp(n,buffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteBuffersARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteBuffersARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteBuffersARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteBuffersARB_Idx),
				 GL_ENTRY_LAST_TS(glDeleteBuffersARB_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteBuffersARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteBuffersARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteBuffersARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteBuffersARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteBuffersARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteBuffersARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteBuffersARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteBuffersARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteBuffersARB_Idx) = get_ts();
        }


	

}