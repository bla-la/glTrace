#include <glTraceCommon.h>
#include <generated.h>

#define glGetFirstPerfQueryIdINTEL_wrp						\
    ((void  (*)(GLuint *queryId                                        \
    ))GL_ENTRY_PTR(glGetFirstPerfQueryIdINTEL_Idx))


GLAPI void  APIENTRY glGetFirstPerfQueryIdINTEL(GLuint *queryId)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFirstPerfQueryIdINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFirstPerfQueryIdINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFirstPerfQueryIdINTEL_wrp(queryId);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFirstPerfQueryIdINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFirstPerfQueryIdINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFirstPerfQueryIdINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFirstPerfQueryIdINTEL_Idx),
				 GL_ENTRY_LAST_TS(glGetFirstPerfQueryIdINTEL_Idx));


        if(last_diff > 1000000000){
            printf("glGetFirstPerfQueryIdINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFirstPerfQueryIdINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetFirstPerfQueryIdINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetFirstPerfQueryIdINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFirstPerfQueryIdINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFirstPerfQueryIdINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFirstPerfQueryIdINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFirstPerfQueryIdINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFirstPerfQueryIdINTEL_Idx) = get_ts();
        }


	

}