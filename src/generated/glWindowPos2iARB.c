#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2iARB_wrp						\
    ((void  (*)(GLint x,GLint y                                        \
    ))GL_ENTRY_PTR(glWindowPos2iARB_Idx))


GLAPI void  APIENTRY glWindowPos2iARB(GLint x,GLint y)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWindowPos2iARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2iARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2iARB_wrp(x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2iARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2iARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2iARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2iARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2iARB_Idx));


        if(last_diff > 1000000000){
            printf("glWindowPos2iARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2iARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2iARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2iARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2iARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2iARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2iARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2iARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2iARB_Idx) = get_ts();
        }


	

}