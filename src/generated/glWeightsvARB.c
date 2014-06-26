#include <glTraceCommon.h>
#include <generated.h>

#define glWeightsvARB_wrp						\
    ((void  (*)(GLint size,const GLshort *weights                                        \
    ))GL_ENTRY_PTR(glWeightsvARB_Idx))


GLAPI void  APIENTRY glWeightsvARB(GLint size,const GLshort *weights)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWeightsvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWeightsvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWeightsvARB_wrp(size,weights);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWeightsvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWeightsvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWeightsvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWeightsvARB_Idx),
				 GL_ENTRY_LAST_TS(glWeightsvARB_Idx));


        if(last_diff > 1000000000){
            printf("glWeightsvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWeightsvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightsvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWeightsvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWeightsvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWeightsvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWeightsvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWeightsvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWeightsvARB_Idx) = get_ts();
        }


	

}