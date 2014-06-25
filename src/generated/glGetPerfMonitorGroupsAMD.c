#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfMonitorGroupsAMD_wrp						\
    ((void  (*)(GLint *numGroups,GLsizei groupsSize,GLuint *groups                                        \
    ))GL_ENTRY_PTR(glGetPerfMonitorGroupsAMD_Idx))


GLAPI void  APIENTRY glGetPerfMonitorGroupsAMD(GLint *numGroups,GLsizei groupsSize,GLuint *groups)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPerfMonitorGroupsAMD_Idx))
	{
            GL_ENTRY_PTR(glGetPerfMonitorGroupsAMD_Idx) = dlsym(RTLD_NEXT,"glGetPerfMonitorGroupsAMD");
            if(!GL_ENTRY_PTR(glGetPerfMonitorGroupsAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPerfMonitorGroupsAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfMonitorGroupsAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfMonitorGroupsAMD_wrp(numGroups,groupsSize,groups);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupsAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfMonitorGroupsAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfMonitorGroupsAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfMonitorGroupsAMD_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfMonitorGroupsAMD_Idx));
        if(last_diff > 1000000000){
            printf("glGetPerfMonitorGroupsAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorGroupsAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupsAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupsAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfMonitorGroupsAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupsAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfMonitorGroupsAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfMonitorGroupsAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfMonitorGroupsAMD_Idx) = get_ts();
        }


	

}