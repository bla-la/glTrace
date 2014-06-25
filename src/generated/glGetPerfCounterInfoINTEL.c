#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfCounterInfoINTEL_wrp						\
    ((void  (*)(GLuint queryId,GLuint counterId,GLuint counterNameLength,GLchar *counterName,GLuint counterDescLength,GLchar *counterDesc,GLuint *counterOffset,GLuint *counterDataSize,GLuint *counterTypeEnum,GLuint *counterDataTypeEnum,GLuint64 *rawCounterMaxValue                                        \
    ))GL_ENTRY_PTR(glGetPerfCounterInfoINTEL_Idx))


GLAPI void  APIENTRY glGetPerfCounterInfoINTEL(GLuint queryId,GLuint counterId,GLuint counterNameLength,GLchar *counterName,GLuint counterDescLength,GLchar *counterDesc,GLuint *counterOffset,GLuint *counterDataSize,GLuint *counterTypeEnum,GLuint *counterDataTypeEnum,GLuint64 *rawCounterMaxValue)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPerfCounterInfoINTEL_Idx))
	{
            GL_ENTRY_PTR(glGetPerfCounterInfoINTEL_Idx) = dlsym(RTLD_NEXT,"glGetPerfCounterInfoINTEL");
            if(!GL_ENTRY_PTR(glGetPerfCounterInfoINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPerfCounterInfoINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfCounterInfoINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfCounterInfoINTEL_wrp(queryId,counterId,counterNameLength,counterName,counterDescLength,counterDesc,counterOffset,counterDataSize,counterTypeEnum,counterDataTypeEnum,rawCounterMaxValue);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfCounterInfoINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfCounterInfoINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfCounterInfoINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfCounterInfoINTEL_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfCounterInfoINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glGetPerfCounterInfoINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfCounterInfoINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfCounterInfoINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfCounterInfoINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfCounterInfoINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfCounterInfoINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfCounterInfoINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfCounterInfoINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfCounterInfoINTEL_Idx) = get_ts();
        }


	

}