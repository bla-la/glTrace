#include <glTraceCommon.h>
#include <generated.h>

#define glGetNextPerfQueryIdINTEL_wrp						\
    ((void  (*)(GLuint queryId,GLuint *nextQueryId                                        \
    ))GL_ENTRY_PTR(glGetNextPerfQueryIdINTEL_Idx))


GLAPI void  APIENTRY glGetNextPerfQueryIdINTEL(GLuint queryId,GLuint *nextQueryId)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNextPerfQueryIdINTEL_Idx))
	{
            GL_ENTRY_PTR(glGetNextPerfQueryIdINTEL_Idx) = dlsym(RTLD_NEXT,"glGetNextPerfQueryIdINTEL");
            if(!GL_ENTRY_PTR(glGetNextPerfQueryIdINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNextPerfQueryIdINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNextPerfQueryIdINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNextPerfQueryIdINTEL_wrp(queryId,nextQueryId);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNextPerfQueryIdINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNextPerfQueryIdINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNextPerfQueryIdINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNextPerfQueryIdINTEL_Idx),
				 GL_ENTRY_LAST_TS(glGetNextPerfQueryIdINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glGetNextPerfQueryIdINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNextPerfQueryIdINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetNextPerfQueryIdINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetNextPerfQueryIdINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNextPerfQueryIdINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNextPerfQueryIdINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNextPerfQueryIdINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNextPerfQueryIdINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNextPerfQueryIdINTEL_Idx) = get_ts();
        }


	

}