#include <glTraceCommon.h>
#include <generated.h>

#define glGenBuffersARB_wrp						\
    ((void  (*)(GLsizei n,GLuint *buffers                                        \
    ))GL_ENTRY_PTR(glGenBuffersARB_Idx))


GLAPI void  APIENTRY glGenBuffersARB(GLsizei n,GLuint *buffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenBuffersARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenBuffersARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenBuffersARB_wrp(n,buffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenBuffersARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenBuffersARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGenBuffersARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenBuffersARB_Idx),
				 GL_ENTRY_LAST_TS(glGenBuffersARB_Idx));


        if(last_diff > 1000000000){
            printf("glGenBuffersARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenBuffersARB_Idx),
	             GL_ENTRY_CALL_TIME(glGenBuffersARB_Idx),
	             GL_ENTRY_CALL_TIME(glGenBuffersARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenBuffersARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenBuffersARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenBuffersARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenBuffersARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenBuffersARB_Idx) = get_ts();
        }


	

}