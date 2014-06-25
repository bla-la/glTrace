#include <glTraceCommon.h>
#include <generated.h>

#define glSampleCoverageARB_wrp						\
    ((void  (*)(GLfloat value,GLboolean invert                                        \
    ))GL_ENTRY_PTR(glSampleCoverageARB_Idx))


GLAPI void  APIENTRY glSampleCoverageARB(GLfloat value,GLboolean invert)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSampleCoverageARB_Idx))
	{
            GL_ENTRY_PTR(glSampleCoverageARB_Idx) = dlsym(RTLD_NEXT,"glSampleCoverageARB");
            if(!GL_ENTRY_PTR(glSampleCoverageARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSampleCoverageARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glSampleCoverageARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSampleCoverageARB_wrp(value,invert);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSampleCoverageARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSampleCoverageARB_Idx) ++;

        GL_ENTRY_LAST_TS(glSampleCoverageARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSampleCoverageARB_Idx),
				 GL_ENTRY_LAST_TS(glSampleCoverageARB_Idx));
        if(last_diff > 1000000000){
            printf("glSampleCoverageARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSampleCoverageARB_Idx),
	             GL_ENTRY_CALL_TIME(glSampleCoverageARB_Idx),
	             GL_ENTRY_CALL_TIME(glSampleCoverageARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glSampleCoverageARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSampleCoverageARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSampleCoverageARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSampleCoverageARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSampleCoverageARB_Idx) = get_ts();
        }


	

}