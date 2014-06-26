#include <glTraceCommon.h>
#include <generated.h>

#define glEndQueryARB_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glEndQueryARB_Idx))


GLAPI void  APIENTRY glEndQueryARB(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEndQueryARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glEndQueryARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEndQueryARB_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEndQueryARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEndQueryARB_Idx) ++;

        GL_ENTRY_LAST_TS(glEndQueryARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEndQueryARB_Idx),
				 GL_ENTRY_LAST_TS(glEndQueryARB_Idx));


        if(last_diff > 1000000000){
            printf("glEndQueryARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEndQueryARB_Idx),
	             GL_ENTRY_CALL_TIME(glEndQueryARB_Idx),
	             GL_ENTRY_CALL_TIME(glEndQueryARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glEndQueryARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEndQueryARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEndQueryARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEndQueryARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEndQueryARB_Idx) = get_ts();
        }


	

}