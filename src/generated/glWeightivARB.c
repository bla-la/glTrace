#include <glTraceCommon.h>
#include <generated.h>

#define glWeightivARB_wrp						\
    ((void  (*)(GLint size,const GLint *weights                                        \
    ))GL_ENTRY_PTR(glWeightivARB_Idx))


GLAPI void  APIENTRY glWeightivARB(GLint size,const GLint *weights)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWeightivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightivARB_wrp(size,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightivARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightivARB_Idx));


        if(last_diff > 1000000000){
            printf("glWeightivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightivARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightivARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightivARB_Idx) = get_ts();
        }


	

}