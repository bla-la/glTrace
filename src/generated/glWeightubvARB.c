#include <glTraceCommon.h>
#include <generated.h>

#define glWeightubvARB_wrp						\
    ((void  (*)(GLint size,const GLubyte *weights                                        \
    ))GL_ENTRY_PTR(glWeightubvARB_Idx))


GLAPI void  APIENTRY glWeightubvARB(GLint size,const GLubyte *weights)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWeightubvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightubvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightubvARB_wrp(size,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightubvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightubvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightubvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightubvARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightubvARB_Idx));


        if(last_diff > 1000000000){
            printf("glWeightubvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightubvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightubvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightubvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightubvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightubvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightubvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightubvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightubvARB_Idx) = get_ts();
        }


	

}