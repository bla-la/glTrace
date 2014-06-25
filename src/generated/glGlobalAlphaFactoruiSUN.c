#include <glTraceCommon.h>
#include <generated.h>

#define glGlobalAlphaFactoruiSUN_wrp						\
    ((void  (*)(GLuint factor                                        \
    ))GL_ENTRY_PTR(glGlobalAlphaFactoruiSUN_Idx))


GLAPI void  APIENTRY glGlobalAlphaFactoruiSUN(GLuint factor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGlobalAlphaFactoruiSUN_Idx))
	{
            GL_ENTRY_PTR(glGlobalAlphaFactoruiSUN_Idx) = dlsym(RTLD_NEXT,"glGlobalAlphaFactoruiSUN");
            if(!GL_ENTRY_PTR(glGlobalAlphaFactoruiSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGlobalAlphaFactoruiSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glGlobalAlphaFactoruiSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGlobalAlphaFactoruiSUN_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGlobalAlphaFactoruiSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGlobalAlphaFactoruiSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glGlobalAlphaFactoruiSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGlobalAlphaFactoruiSUN_Idx),
				 GL_ENTRY_LAST_TS(glGlobalAlphaFactoruiSUN_Idx));
        if(last_diff > 1000000000){
            printf("glGlobalAlphaFactoruiSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactoruiSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactoruiSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactoruiSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactoruiSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGlobalAlphaFactoruiSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactoruiSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGlobalAlphaFactoruiSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGlobalAlphaFactoruiSUN_Idx) = get_ts();
        }


	

}