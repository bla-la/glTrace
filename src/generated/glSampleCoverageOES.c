#include <glTraceCommon.h>
#include <generated.h>

#define glSampleCoverageOES_wrp						\
    ((void  (*)(GLfixed value,GLboolean invert                                        \
    ))GL_ENTRY_PTR(glSampleCoverageOES_Idx))


GLAPI void  APIENTRY glSampleCoverageOES(GLfixed value,GLboolean invert)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSampleCoverageOES_Idx))
	{
            GL_ENTRY_PTR(glSampleCoverageOES_Idx) = dlsym(RTLD_NEXT,"glSampleCoverageOES");
            if(!GL_ENTRY_PTR(glSampleCoverageOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSampleCoverageOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glSampleCoverageOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSampleCoverageOES_wrp(value,invert);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSampleCoverageOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSampleCoverageOES_Idx) ++;

        GL_ENTRY_LAST_TS(glSampleCoverageOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSampleCoverageOES_Idx),
				 GL_ENTRY_LAST_TS(glSampleCoverageOES_Idx));
        if(last_diff > 1000000000){
            printf("glSampleCoverageOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSampleCoverageOES_Idx),
	             GL_ENTRY_CALL_TIME(glSampleCoverageOES_Idx),
	             GL_ENTRY_CALL_TIME(glSampleCoverageOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glSampleCoverageOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSampleCoverageOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSampleCoverageOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSampleCoverageOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSampleCoverageOES_Idx) = get_ts();
        }


	

}