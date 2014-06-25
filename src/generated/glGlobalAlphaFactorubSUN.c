#include <glTraceCommon.h>
#include <generated.h>

#define glGlobalAlphaFactorubSUN_wrp						\
    ((void  (*)(GLubyte factor                                        \
    ))GL_ENTRY_PTR(glGlobalAlphaFactorubSUN_Idx))


GLAPI void  APIENTRY glGlobalAlphaFactorubSUN(GLubyte factor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGlobalAlphaFactorubSUN_Idx))
	{
            GL_ENTRY_PTR(glGlobalAlphaFactorubSUN_Idx) = dlsym(RTLD_NEXT,"glGlobalAlphaFactorubSUN");
            if(!GL_ENTRY_PTR(glGlobalAlphaFactorubSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGlobalAlphaFactorubSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glGlobalAlphaFactorubSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGlobalAlphaFactorubSUN_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGlobalAlphaFactorubSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorubSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glGlobalAlphaFactorubSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGlobalAlphaFactorubSUN_Idx),
				 GL_ENTRY_LAST_TS(glGlobalAlphaFactorubSUN_Idx));
        if(last_diff > 1000000000){
            printf("glGlobalAlphaFactorubSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorubSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorubSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorubSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorubSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGlobalAlphaFactorubSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorubSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorubSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGlobalAlphaFactorubSUN_Idx) = get_ts();
        }


	

}