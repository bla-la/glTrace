#include <glTraceCommon.h>
#include <generated.h>

#define glGetPathMetricsNV_wrp						\
    ((void  (*)(GLbitfield metricQueryMask,GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLsizei stride,GLfloat *metrics                                        \
    ))GL_ENTRY_PTR(glGetPathMetricsNV_Idx))


GLAPI void  APIENTRY glGetPathMetricsNV(GLbitfield metricQueryMask,GLsizei numPaths,GLenum pathNameType,const void *paths,GLuint pathBase,GLsizei stride,GLfloat *metrics)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPathMetricsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPathMetricsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPathMetricsNV_wrp(metricQueryMask,numPaths,pathNameType,paths,pathBase,stride,metrics);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPathMetricsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPathMetricsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPathMetricsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPathMetricsNV_Idx),
				 GL_ENTRY_LAST_TS(glGetPathMetricsNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetPathMetricsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPathMetricsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathMetricsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetPathMetricsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPathMetricsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPathMetricsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPathMetricsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPathMetricsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPathMetricsNV_Idx) = get_ts();
        }


	

}