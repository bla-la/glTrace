#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfQueryInfoINTEL_wrp						\
    ((void  (*)(GLuint queryId,GLuint queryNameLength,GLchar *queryName,GLuint *dataSize,GLuint *noCounters,GLuint *noInstances,GLuint *capsMask                                        \
    ))GL_ENTRY_PTR(glGetPerfQueryInfoINTEL_Idx))


GLAPI void  APIENTRY glGetPerfQueryInfoINTEL(GLuint queryId,GLuint queryNameLength,GLchar *queryName,GLuint *dataSize,GLuint *noCounters,GLuint *noInstances,GLuint *capsMask)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPerfQueryInfoINTEL_Idx))
	{
            GL_ENTRY_PTR(glGetPerfQueryInfoINTEL_Idx) = dlsym(RTLD_NEXT,"glGetPerfQueryInfoINTEL");
            if(!GL_ENTRY_PTR(glGetPerfQueryInfoINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPerfQueryInfoINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfQueryInfoINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfQueryInfoINTEL_wrp(queryId,queryNameLength,queryName,dataSize,noCounters,noInstances,capsMask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfQueryInfoINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfQueryInfoINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfQueryInfoINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfQueryInfoINTEL_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfQueryInfoINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glGetPerfQueryInfoINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfQueryInfoINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfQueryInfoINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfQueryInfoINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfQueryInfoINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfQueryInfoINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfQueryInfoINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfQueryInfoINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfQueryInfoINTEL_Idx) = get_ts();
        }


	

}