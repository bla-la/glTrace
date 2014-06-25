#include <glTraceCommon.h>
#include <generated.h>

#define glGlobalAlphaFactorusSUN_wrp						\
    ((void  (*)(GLushort factor                                        \
    ))GL_ENTRY_PTR(glGlobalAlphaFactorusSUN_Idx))


GLAPI void  APIENTRY glGlobalAlphaFactorusSUN(GLushort factor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGlobalAlphaFactorusSUN_Idx))
	{
            GL_ENTRY_PTR(glGlobalAlphaFactorusSUN_Idx) = dlsym(RTLD_NEXT,"glGlobalAlphaFactorusSUN");
            if(!GL_ENTRY_PTR(glGlobalAlphaFactorusSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGlobalAlphaFactorusSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glGlobalAlphaFactorusSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGlobalAlphaFactorusSUN_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGlobalAlphaFactorusSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorusSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glGlobalAlphaFactorusSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGlobalAlphaFactorusSUN_Idx),
				 GL_ENTRY_LAST_TS(glGlobalAlphaFactorusSUN_Idx));
        if(last_diff > 1000000000){
            printf("glGlobalAlphaFactorusSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorusSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorusSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorusSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorusSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGlobalAlphaFactorusSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorusSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorusSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGlobalAlphaFactorusSUN_Idx) = get_ts();
        }


	

}