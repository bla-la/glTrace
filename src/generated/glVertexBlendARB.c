#include <glTraceCommon.h>
#include <generated.h>

#define glVertexBlendARB_wrp						\
    ((void  (*)(GLint count                                        \
    ))GL_ENTRY_PTR(glVertexBlendARB_Idx))


GLAPI void  APIENTRY glVertexBlendARB(GLint count)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexBlendARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexBlendARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexBlendARB_wrp(count);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexBlendARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexBlendARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexBlendARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexBlendARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexBlendARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexBlendARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexBlendARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexBlendARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexBlendARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexBlendARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexBlendARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexBlendARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexBlendARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexBlendARB_Idx) = get_ts();
        }


	

}