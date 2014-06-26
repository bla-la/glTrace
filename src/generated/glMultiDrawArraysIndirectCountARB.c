#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawArraysIndirectCountARB_wrp						\
    ((void  (*)(GLenum mode,GLintptr indirect,GLintptr drawcount,GLsizei maxdrawcount,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glMultiDrawArraysIndirectCountARB_Idx))


GLAPI void  APIENTRY glMultiDrawArraysIndirectCountARB(GLenum mode,GLintptr indirect,GLintptr drawcount,GLsizei maxdrawcount,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectCountARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectCountARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawArraysIndirectCountARB_wrp(mode,indirect,drawcount,maxdrawcount,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectCountARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectCountARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawArraysIndirectCountARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectCountARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawArraysIndirectCountARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawArraysIndirectCountARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectCountARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectCountARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectCountARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectCountARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectCountARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawArraysIndirectCountARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawArraysIndirectCountARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawArraysIndirectCountARB_Idx) = get_ts();
        }


	

}