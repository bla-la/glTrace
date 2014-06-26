#include <glTraceCommon.h>
#include <generated.h>

#define glBeginPerfMonitorAMD_wrp						\
    ((void  (*)(GLuint monitor                                        \
    ))GL_ENTRY_PTR(glBeginPerfMonitorAMD_Idx))


GLAPI void  APIENTRY glBeginPerfMonitorAMD(GLuint monitor)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBeginPerfMonitorAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginPerfMonitorAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginPerfMonitorAMD_wrp(monitor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginPerfMonitorAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginPerfMonitorAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginPerfMonitorAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginPerfMonitorAMD_Idx),
				 GL_ENTRY_LAST_TS(glBeginPerfMonitorAMD_Idx));


        if(last_diff > 1000000000){
            printf("glBeginPerfMonitorAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginPerfMonitorAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBeginPerfMonitorAMD_Idx),
	             GL_ENTRY_CALL_TIME(glBeginPerfMonitorAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginPerfMonitorAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginPerfMonitorAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginPerfMonitorAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginPerfMonitorAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginPerfMonitorAMD_Idx) = get_ts();
        }


	

}