#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfMonitorCountersAMD_wrp						\
    ((void  (*)(GLuint group,GLint *numCounters,GLint *maxActiveCounters,GLsizei counterSize,GLuint *counters                                        \
    ))GL_ENTRY_PTR(glGetPerfMonitorCountersAMD_Idx))


GLAPI void  APIENTRY glGetPerfMonitorCountersAMD(GLuint group,GLint *numCounters,GLint *maxActiveCounters,GLsizei counterSize,GLuint *counters)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPerfMonitorCountersAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfMonitorCountersAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfMonitorCountersAMD_wrp(group,numCounters,maxActiveCounters,counterSize,counters);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfMonitorCountersAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfMonitorCountersAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfMonitorCountersAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfMonitorCountersAMD_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfMonitorCountersAMD_Idx));


        if(last_diff > 1000000000){
            printf("glGetPerfMonitorCountersAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCountersAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorCountersAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorCountersAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCountersAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfMonitorCountersAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCountersAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfMonitorCountersAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfMonitorCountersAMD_Idx) = get_ts();
        }


	

}