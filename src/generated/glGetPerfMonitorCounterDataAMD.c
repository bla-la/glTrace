#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfMonitorCounterDataAMD_wrp						\
    ((void  (*)(GLuint monitor,GLenum pname,GLsizei dataSize,GLuint *data,GLint *bytesWritten                                        \
    ))GL_ENTRY_PTR(glGetPerfMonitorCounterDataAMD_Idx))


GLAPI void  APIENTRY glGetPerfMonitorCounterDataAMD(GLuint monitor,GLenum pname,GLsizei dataSize,GLuint *data,GLint *bytesWritten)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPerfMonitorCounterDataAMD_Idx))
	{
            GL_ENTRY_PTR(glGetPerfMonitorCounterDataAMD_Idx) = dlsym(RTLD_NEXT,"glGetPerfMonitorCounterDataAMD");
            if(!GL_ENTRY_PTR(glGetPerfMonitorCounterDataAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPerfMonitorCounterDataAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfMonitorCounterDataAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfMonitorCounterDataAMD_wrp(monitor,pname,dataSize,data,bytesWritten);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterDataAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterDataAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfMonitorCounterDataAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfMonitorCounterDataAMD_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfMonitorCounterDataAMD_Idx));
        if(last_diff > 1000000000){
            printf("glGetPerfMonitorCounterDataAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterDataAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterDataAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterDataAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterDataAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterDataAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfMonitorCounterDataAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfMonitorCounterDataAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfMonitorCounterDataAMD_Idx) = get_ts();
        }


	

}