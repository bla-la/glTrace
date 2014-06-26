#include <glTraceCommon.h>
#include <generated.h>

#define glDeletePerfMonitorsAMD_wrp						\
    ((void  (*)(GLsizei n,GLuint *monitors                                        \
    ))GL_ENTRY_PTR(glDeletePerfMonitorsAMD_Idx))


GLAPI void  APIENTRY glDeletePerfMonitorsAMD(GLsizei n,GLuint *monitors)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeletePerfMonitorsAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeletePerfMonitorsAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeletePerfMonitorsAMD_wrp(n,monitors);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeletePerfMonitorsAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeletePerfMonitorsAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glDeletePerfMonitorsAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeletePerfMonitorsAMD_Idx),
				 GL_ENTRY_LAST_TS(glDeletePerfMonitorsAMD_Idx));


        if(last_diff > 1000000000){
            printf("glDeletePerfMonitorsAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeletePerfMonitorsAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDeletePerfMonitorsAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDeletePerfMonitorsAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeletePerfMonitorsAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeletePerfMonitorsAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeletePerfMonitorsAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeletePerfMonitorsAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeletePerfMonitorsAMD_Idx) = get_ts();
        }


	

}