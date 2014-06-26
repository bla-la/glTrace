#include <glTraceCommon.h>
#include <generated.h>

#define glMultiDrawElementsIndirectCountARB_wrp						\
    ((void  (*)(GLenum mode,GLenum type,GLintptr indirect,GLintptr drawcount,GLsizei maxdrawcount,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glMultiDrawElementsIndirectCountARB_Idx))


GLAPI void  APIENTRY glMultiDrawElementsIndirectCountARB(GLenum mode,GLenum type,GLintptr indirect,GLintptr drawcount,GLsizei maxdrawcount,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectCountARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectCountARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultiDrawElementsIndirectCountARB_wrp(mode,type,indirect,drawcount,maxdrawcount,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectCountARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectCountARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultiDrawElementsIndirectCountARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectCountARB_Idx),
				 GL_ENTRY_LAST_TS(glMultiDrawElementsIndirectCountARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultiDrawElementsIndirectCountARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectCountARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectCountARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectCountARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectCountARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectCountARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultiDrawElementsIndirectCountARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultiDrawElementsIndirectCountARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultiDrawElementsIndirectCountARB_Idx) = get_ts();
        }


	

}