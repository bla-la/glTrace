#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfQueryDataINTEL_wrp						\
    ((void  (*)(GLuint queryHandle,GLuint flags,GLsizei dataSize,GLvoid *data,GLuint *bytesWritten                                        \
    ))GL_ENTRY_PTR(glGetPerfQueryDataINTEL_Idx))


GLAPI void  APIENTRY glGetPerfQueryDataINTEL(GLuint queryHandle,GLuint flags,GLsizei dataSize,GLvoid *data,GLuint *bytesWritten)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetPerfQueryDataINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfQueryDataINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfQueryDataINTEL_wrp(queryHandle,flags,dataSize,data,bytesWritten);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfQueryDataINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfQueryDataINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfQueryDataINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfQueryDataINTEL_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfQueryDataINTEL_Idx));


        if(last_diff > 1000000000){
            printf("glGetPerfQueryDataINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfQueryDataINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfQueryDataINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfQueryDataINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfQueryDataINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfQueryDataINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfQueryDataINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfQueryDataINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfQueryDataINTEL_Idx) = get_ts();
        }


	

}