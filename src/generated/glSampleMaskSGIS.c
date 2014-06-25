#include <glTraceCommon.h>
#include <generated.h>

#define glSampleMaskSGIS_wrp						\
    ((void  (*)(GLclampf value,GLboolean invert                                        \
    ))GL_ENTRY_PTR(glSampleMaskSGIS_Idx))


GLAPI void  APIENTRY glSampleMaskSGIS(GLclampf value,GLboolean invert)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSampleMaskSGIS_Idx))
	{
            GL_ENTRY_PTR(glSampleMaskSGIS_Idx) = dlsym(RTLD_NEXT,"glSampleMaskSGIS");
            if(!GL_ENTRY_PTR(glSampleMaskSGIS_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSampleMaskSGIS_Idx))
    	{
            GL_ENTRY_PREV_TS(glSampleMaskSGIS_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSampleMaskSGIS_wrp(value,invert);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSampleMaskSGIS_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSampleMaskSGIS_Idx) ++;

        GL_ENTRY_LAST_TS(glSampleMaskSGIS_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSampleMaskSGIS_Idx),
				 GL_ENTRY_LAST_TS(glSampleMaskSGIS_Idx));
        if(last_diff > 1000000000){
            printf("glSampleMaskSGIS %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSampleMaskSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMaskSGIS_Idx),
	             GL_ENTRY_CALL_TIME(glSampleMaskSGIS_Idx) /
	             GL_ENTRY_CALL_COUNT(glSampleMaskSGIS_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSampleMaskSGIS_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSampleMaskSGIS_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSampleMaskSGIS_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSampleMaskSGIS_Idx) = get_ts();
        }


	

}