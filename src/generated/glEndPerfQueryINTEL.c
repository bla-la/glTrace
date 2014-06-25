#include <glTraceCommon.h>
#include <generated.h>

#define glEndPerfQueryINTEL_wrp						\
    ((void  (*)(GLuint queryHandle                                        \
    ))GL_ENTRY_PTR(glEndPerfQueryINTEL_Idx))


GLAPI void  APIENTRY glEndPerfQueryINTEL(GLuint queryHandle)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEndPerfQueryINTEL_Idx))
	{
            GL_ENTRY_PTR(glEndPerfQueryINTEL_Idx) = dlsym(RTLD_NEXT,"glEndPerfQueryINTEL");
            if(!GL_ENTRY_PTR(glEndPerfQueryINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEndPerfQueryINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glEndPerfQueryINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEndPerfQueryINTEL_wrp(queryHandle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEndPerfQueryINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEndPerfQueryINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glEndPerfQueryINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEndPerfQueryINTEL_Idx),
				 GL_ENTRY_LAST_TS(glEndPerfQueryINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glEndPerfQueryINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEndPerfQueryINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glEndPerfQueryINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glEndPerfQueryINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glEndPerfQueryINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEndPerfQueryINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEndPerfQueryINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEndPerfQueryINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEndPerfQueryINTEL_Idx) = get_ts();
        }


	

}