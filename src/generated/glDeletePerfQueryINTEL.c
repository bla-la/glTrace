#include <glTraceCommon.h>
#include <generated.h>

#define glDeletePerfQueryINTEL_wrp						\
    ((void  (*)(GLuint queryHandle                                        \
    ))GL_ENTRY_PTR(glDeletePerfQueryINTEL_Idx))


GLAPI void  APIENTRY glDeletePerfQueryINTEL(GLuint queryHandle)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeletePerfQueryINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeletePerfQueryINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeletePerfQueryINTEL_wrp(queryHandle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeletePerfQueryINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeletePerfQueryINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glDeletePerfQueryINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeletePerfQueryINTEL_Idx),
				 GL_ENTRY_LAST_TS(glDeletePerfQueryINTEL_Idx));


        if(last_diff > 1000000000){
            printf("glDeletePerfQueryINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeletePerfQueryINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glDeletePerfQueryINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glDeletePerfQueryINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeletePerfQueryINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeletePerfQueryINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeletePerfQueryINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeletePerfQueryINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeletePerfQueryINTEL_Idx) = get_ts();
        }


	

}