#include <glTraceCommon.h>
#include <generated.h>

#define glGetPerfQueryIdByNameINTEL_wrp						\
    ((void  (*)(GLchar *queryName,GLuint *queryId                                        \
    ))GL_ENTRY_PTR(glGetPerfQueryIdByNameINTEL_Idx))


GLAPI void  APIENTRY glGetPerfQueryIdByNameINTEL(GLchar *queryName,GLuint *queryId)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetPerfQueryIdByNameINTEL_Idx))
	{
            GL_ENTRY_PTR(glGetPerfQueryIdByNameINTEL_Idx) = dlsym(RTLD_NEXT,"glGetPerfQueryIdByNameINTEL");
            if(!GL_ENTRY_PTR(glGetPerfQueryIdByNameINTEL_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetPerfQueryIdByNameINTEL_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetPerfQueryIdByNameINTEL_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetPerfQueryIdByNameINTEL_wrp(queryName,queryId);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetPerfQueryIdByNameINTEL_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetPerfQueryIdByNameINTEL_Idx) ++;

        GL_ENTRY_LAST_TS(glGetPerfQueryIdByNameINTEL_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetPerfQueryIdByNameINTEL_Idx),
				 GL_ENTRY_LAST_TS(glGetPerfQueryIdByNameINTEL_Idx));
        if(last_diff > 1000000000){
            printf("glGetPerfQueryIdByNameINTEL %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetPerfQueryIdByNameINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfQueryIdByNameINTEL_Idx),
	             GL_ENTRY_CALL_TIME(glGetPerfQueryIdByNameINTEL_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetPerfQueryIdByNameINTEL_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetPerfQueryIdByNameINTEL_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetPerfQueryIdByNameINTEL_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetPerfQueryIdByNameINTEL_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetPerfQueryIdByNameINTEL_Idx) = get_ts();
        }


	

}