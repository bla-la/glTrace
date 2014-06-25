#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfMonitorCounterInfoAMD_wrp						\
    ((void  (*)(GLuint group,GLuint counter,GLenum pname,void *data                                        \
    ))GL_ENTRY_PTR(glGetPerfMonitorCounterInfoAMD_Idx))


GLAPI void  APIENTRY glGetPerfMonitorCounterInfoAMD(GLuint group,GLuint counter,GLenum pname,void *data)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPerfMonitorCounterInfoAMD_Idx))
	{
            GL_ENTRY_PTR(glGetPerfMonitorCounterInfoAMD_Idx) = dlsym(RTLD_NEXT,"glGetPerfMonitorCounterInfoAMD");
            if(!GL_ENTRY_PTR(glGetPerfMonitorCounterInfoAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPerfMonitorCounterInfoAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfMonitorCounterInfoAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfMonitorCounterInfoAMD_wrp(group,counter,pname,data);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterInfoAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterInfoAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfMonitorCounterInfoAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfMonitorCounterInfoAMD_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfMonitorCounterInfoAMD_Idx));
        if(last_diff > 1000000000){
            printf("glGetPerfMonitorCounterInfoAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterInfoAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterInfoAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterInfoAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterInfoAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterInfoAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterInfoAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterInfoAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfMonitorCounterInfoAMD_Idx) = get_ts();
        }


	

}