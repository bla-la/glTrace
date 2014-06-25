#include <glTraceCommon.h>
#include <generated.h>

#define glSamplePatternSGIS_wrp						\
    ((void  (*)(GLenum pattern                                        \
    ))GL_ENTRY_PTR(glSamplePatternSGIS_Idx))


GLAPI void  APIENTRY glSamplePatternSGIS(GLenum pattern)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSamplePatternSGIS_Idx))
	{
            GL_ENTRY_PTR(glSamplePatternSGIS_Idx) = dlsym(RTLD_NEXT,"glSamplePatternSGIS");
            if(!GL_ENTRY_PTR(glSamplePatternSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSamplePatternSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glSamplePatternSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSamplePatternSGIS_wrp(pattern);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSamplePatternSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSamplePatternSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glSamplePatternSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSamplePatternSGIS_Idx),
				 GL_ENTRY_LAST_TS(glSamplePatternSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glSamplePatternSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSamplePatternSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glSamplePatternSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glSamplePatternSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glSamplePatternSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSamplePatternSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSamplePatternSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSamplePatternSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSamplePatternSGIS_Idx) = get_ts();
        }


	

}