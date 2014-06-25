#include <glTraceCommon.h>
#include <generated.h>

#define glSampleCoverage_wrp						\
    ((void  (*)(GLfloat value,GLboolean invert                                        \
    ))GL_ENTRY_PTR(glSampleCoverage_Idx))


GLAPI void  APIENTRY glSampleCoverage(GLfloat value,GLboolean invert)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSampleCoverage_Idx))
	{
            GL_ENTRY_PTR(glSampleCoverage_Idx) = dlsym(RTLD_NEXT,"glSampleCoverage");
            if(!GL_ENTRY_PTR(glSampleCoverage_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSampleCoverage_Idx))
    	{
            GL_ENTRY_PREV_TS(glSampleCoverage_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSampleCoverage_wrp(value,invert);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSampleCoverage_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSampleCoverage_Idx) ++;

        GL_ENTRY_LAST_TS(glSampleCoverage_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSampleCoverage_Idx),
				 GL_ENTRY_LAST_TS(glSampleCoverage_Idx));
        if(last_diff > 1000000000){
            printf("glSampleCoverage %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSampleCoverage_Idx),
	             GL_ENTRY_CALL_TIME(glSampleCoverage_Idx),
	             GL_ENTRY_CALL_TIME(glSampleCoverage_Idx) /
	             GL_ENTRY_CALL_COUNT(glSampleCoverage_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSampleCoverage_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSampleCoverage_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSampleCoverage_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSampleCoverage_Idx) = get_ts();
        }


	

}