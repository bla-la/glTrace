#include <glTraceCommon.h>
#include <generated.h>

#define glWeightdvARB_wrp						\
    ((void  (*)(GLint size,const GLdouble *weights                                        \
    ))GL_ENTRY_PTR(glWeightdvARB_Idx))


GLAPI void  APIENTRY glWeightdvARB(GLint size,const GLdouble *weights)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWeightdvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightdvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightdvARB_wrp(size,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightdvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightdvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightdvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightdvARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightdvARB_Idx));


        if(last_diff > 1000000000){
            printf("glWeightdvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightdvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightdvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightdvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightdvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightdvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightdvARB_Idx) = get_ts();
        }


	

}