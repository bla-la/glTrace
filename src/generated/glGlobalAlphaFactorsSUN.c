#include <glTraceCommon.h>
#include <generated.h>

#define glGlobalAlphaFactorsSUN_wrp						\
    ((void  (*)(GLshort factor                                        \
    ))GL_ENTRY_PTR(glGlobalAlphaFactorsSUN_Idx))


GLAPI void  APIENTRY glGlobalAlphaFactorsSUN(GLshort factor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGlobalAlphaFactorsSUN_Idx))
	{
            GL_ENTRY_PTR(glGlobalAlphaFactorsSUN_Idx) = dlsym(RTLD_NEXT,"glGlobalAlphaFactorsSUN");
            if(!GL_ENTRY_PTR(glGlobalAlphaFactorsSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGlobalAlphaFactorsSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glGlobalAlphaFactorsSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGlobalAlphaFactorsSUN_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGlobalAlphaFactorsSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorsSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glGlobalAlphaFactorsSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGlobalAlphaFactorsSUN_Idx),
				 GL_ENTRY_LAST_TS(glGlobalAlphaFactorsSUN_Idx));
        if(last_diff > 1000000000){
            printf("glGlobalAlphaFactorsSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorsSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorsSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorsSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorsSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGlobalAlphaFactorsSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorsSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorsSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGlobalAlphaFactorsSUN_Idx) = get_ts();
        }


	

}