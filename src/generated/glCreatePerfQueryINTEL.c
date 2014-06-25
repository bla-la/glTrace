#include <glTraceCommon.h>
#include <generated.h>

#define glCreatePerfQueryINTEL_wrp						\
    ((void  (*)(GLuint queryId,GLuint *queryHandle                                        \
    ))GL_ENTRY_PTR(glCreatePerfQueryINTEL_Idx))


GLAPI void  APIENTRY glCreatePerfQueryINTEL(GLuint queryId,GLuint *queryHandle)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCreatePerfQueryINTEL_Idx))
	{
            GL_ENTRY_PTR(glCreatePerfQueryINTEL_Idx) = dlsym(RTLD_NEXT,"glCreatePerfQueryINTEL");
            if(!GL_ENTRY_PTR(glCreatePerfQueryINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCreatePerfQueryINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glCreatePerfQueryINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCreatePerfQueryINTEL_wrp(queryId,queryHandle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCreatePerfQueryINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCreatePerfQueryINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glCreatePerfQueryINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCreatePerfQueryINTEL_Idx),
				 GL_ENTRY_LAST_TS(glCreatePerfQueryINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glCreatePerfQueryINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCreatePerfQueryINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glCreatePerfQueryINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glCreatePerfQueryINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glCreatePerfQueryINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCreatePerfQueryINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCreatePerfQueryINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCreatePerfQueryINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCreatePerfQueryINTEL_Idx) = get_ts();
        }


	

}