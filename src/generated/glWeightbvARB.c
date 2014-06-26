#include <glTraceCommon.h>
#include <generated.h>

#define glWeightbvARB_wrp						\
    ((void  (*)(GLint size,const GLbyte *weights                                        \
    ))GL_ENTRY_PTR(glWeightbvARB_Idx))


GLAPI void  APIENTRY glWeightbvARB(GLint size,const GLbyte *weights)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWeightbvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightbvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightbvARB_wrp(size,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightbvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightbvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightbvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightbvARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightbvARB_Idx));


        if(last_diff > 1000000000){
            printf("glWeightbvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightbvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightbvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightbvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightbvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightbvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightbvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightbvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightbvARB_Idx) = get_ts();
        }


	

}