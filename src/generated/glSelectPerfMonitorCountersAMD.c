#include <glTraceCommon.h>
#include <generated.h>

#define glSelectPerfMonitorCountersAMD_wrp						\
    ((void  (*)(GLuint monitor,GLboolean enable,GLuint group,GLint numCounters,GLuint *counterList                                        \
    ))GL_ENTRY_PTR(glSelectPerfMonitorCountersAMD_Idx))


GLAPI void  APIENTRY glSelectPerfMonitorCountersAMD(GLuint monitor,GLboolean enable,GLuint group,GLint numCounters,GLuint *counterList)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glSelectPerfMonitorCountersAMD_Idx))
	{
            GL_ENTRY_PTR(glSelectPerfMonitorCountersAMD_Idx) = dlsym(RTLD_NEXT,"glSelectPerfMonitorCountersAMD");
            if(!GL_ENTRY_PTR(glSelectPerfMonitorCountersAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glSelectPerfMonitorCountersAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glSelectPerfMonitorCountersAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSelectPerfMonitorCountersAMD_wrp(monitor,enable,group,numCounters,counterList);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSelectPerfMonitorCountersAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSelectPerfMonitorCountersAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glSelectPerfMonitorCountersAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSelectPerfMonitorCountersAMD_Idx),
				 GL_ENTRY_LAST_TS(glSelectPerfMonitorCountersAMD_Idx));
        if(last_diff > 1000000000){
            printf("glSelectPerfMonitorCountersAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSelectPerfMonitorCountersAMD_Idx),
	             GL_ENTRY_CALL_TIME(glSelectPerfMonitorCountersAMD_Idx),
	             GL_ENTRY_CALL_TIME(glSelectPerfMonitorCountersAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glSelectPerfMonitorCountersAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSelectPerfMonitorCountersAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSelectPerfMonitorCountersAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSelectPerfMonitorCountersAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSelectPerfMonitorCountersAMD_Idx) = get_ts();
        }


	

}