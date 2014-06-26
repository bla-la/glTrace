#include <glTraceCommon.h>
#include <generated.h>

#define glMinSampleShadingARB_wrp						\
    ((void  (*)(GLfloat value                                        \
    ))GL_ENTRY_PTR(glMinSampleShadingARB_Idx))


GLAPI void  APIENTRY glMinSampleShadingARB(GLfloat value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMinSampleShadingARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMinSampleShadingARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMinSampleShadingARB_wrp(value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMinSampleShadingARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMinSampleShadingARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMinSampleShadingARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMinSampleShadingARB_Idx),
				 GL_ENTRY_LAST_TS(glMinSampleShadingARB_Idx));


        if(last_diff > 1000000000){
            printf("glMinSampleShadingARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMinSampleShadingARB_Idx),
	             GL_ENTRY_CALL_TIME(glMinSampleShadingARB_Idx),
	             GL_ENTRY_CALL_TIME(glMinSampleShadingARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMinSampleShadingARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMinSampleShadingARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMinSampleShadingARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMinSampleShadingARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMinSampleShadingARB_Idx) = get_ts();
        }


	

}