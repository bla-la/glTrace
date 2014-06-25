#include <glTraceCommon.h>
#include <generated.h>

#define glGenPerfMonitorsAMD_wrp						\
    ((void  (*)(GLsizei n,GLuint *monitors                                        \
    ))GL_ENTRY_PTR(glGenPerfMonitorsAMD_Idx))


GLAPI void  APIENTRY glGenPerfMonitorsAMD(GLsizei n,GLuint *monitors)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenPerfMonitorsAMD_Idx))
	{
            GL_ENTRY_PTR(glGenPerfMonitorsAMD_Idx) = dlsym(RTLD_NEXT,"glGenPerfMonitorsAMD");
            if(!GL_ENTRY_PTR(glGenPerfMonitorsAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenPerfMonitorsAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenPerfMonitorsAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenPerfMonitorsAMD_wrp(n,monitors);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenPerfMonitorsAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenPerfMonitorsAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGenPerfMonitorsAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenPerfMonitorsAMD_Idx),
				 GL_ENTRY_LAST_TS(glGenPerfMonitorsAMD_Idx));
        if(last_diff > 1000000000){
            printf("glGenPerfMonitorsAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenPerfMonitorsAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGenPerfMonitorsAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGenPerfMonitorsAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenPerfMonitorsAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenPerfMonitorsAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenPerfMonitorsAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenPerfMonitorsAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenPerfMonitorsAMD_Idx) = get_ts();
        }


	

}