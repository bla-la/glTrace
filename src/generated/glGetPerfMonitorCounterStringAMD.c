#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfMonitorCounterStringAMD_wrp						\
    ((void  (*)(GLuint group,GLuint counter,GLsizei bufSize,GLsizei *length,GLchar *counterString                                        \
    ))GL_ENTRY_PTR(glGetPerfMonitorCounterStringAMD_Idx))


GLAPI void  APIENTRY glGetPerfMonitorCounterStringAMD(GLuint group,GLuint counter,GLsizei bufSize,GLsizei *length,GLchar *counterString)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPerfMonitorCounterStringAMD_Idx))
	{
            GL_ENTRY_PTR(glGetPerfMonitorCounterStringAMD_Idx) = dlsym(RTLD_NEXT,"glGetPerfMonitorCounterStringAMD");
            if(!GL_ENTRY_PTR(glGetPerfMonitorCounterStringAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPerfMonitorCounterStringAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfMonitorCounterStringAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfMonitorCounterStringAMD_wrp(group,counter,bufSize,length,counterString);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterStringAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterStringAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfMonitorCounterStringAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfMonitorCounterStringAMD_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfMonitorCounterStringAMD_Idx));
        if(last_diff > 1000000000){
            printf("glGetPerfMonitorCounterStringAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterStringAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterStringAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterStringAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterStringAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterStringAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterStringAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterStringAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfMonitorCounterStringAMD_Idx) = get_ts();
        }


	

}