#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfMonitorGroupStringAMD_wrp						\
    ((void  (*)(GLuint group,GLsizei bufSize,GLsizei *length,GLchar *groupString                                        \
    ))GL_ENTRY_PTR(glGetPerfMonitorGroupStringAMD_Idx))


GLAPI void  APIENTRY glGetPerfMonitorGroupStringAMD(GLuint group,GLsizei bufSize,GLsizei *length,GLchar *groupString)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPerfMonitorGroupStringAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfMonitorGroupStringAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfMonitorGroupStringAMD_wrp(group,bufSize,length,groupString);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupStringAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfMonitorGroupStringAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfMonitorGroupStringAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfMonitorGroupStringAMD_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfMonitorGroupStringAMD_Idx));


        if(last_diff > 1000000000){
            printf("glGetPerfMonitorGroupStringAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorGroupStringAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupStringAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupStringAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorGroupStringAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupStringAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfMonitorGroupStringAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupStringAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfMonitorGroupStringAMD_Idx) = get_ts();
        }


	

}