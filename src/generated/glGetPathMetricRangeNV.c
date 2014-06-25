#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathMetricRangeNV_wrp						\
    ((void  (*)(GLbitfield metricQueryMask,GLuint firstPathName,GLsizei numPaths,GLsizei stride,GLfloat *metrics                                        \
    ))GL_ENTRY_PTR(glGetPathMetricRangeNV_Idx))


GLAPI void  APIENTRY glGetPathMetricRangeNV(GLbitfield metricQueryMask,GLuint firstPathName,GLsizei numPaths,GLsizei stride,GLfloat *metrics)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPathMetricRangeNV_Idx))
	{
            GL_ENTRY_PTR(glGetPathMetricRangeNV_Idx) = dlsym(RTLD_NEXT,"glGetPathMetricRangeNV");
            if(!GL_ENTRY_PTR(glGetPathMetricRangeNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPathMetricRangeNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathMetricRangeNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathMetricRangeNV_wrp(metricQueryMask,firstPathName,numPaths,stride,metrics);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathMetricRangeNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathMetricRangeNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathMetricRangeNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathMetricRangeNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathMetricRangeNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetPathMetricRangeNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathMetricRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathMetricRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathMetricRangeNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathMetricRangeNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathMetricRangeNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathMetricRangeNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathMetricRangeNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathMetricRangeNV_Idx) = get_ts();
        }


	

}