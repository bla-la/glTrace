#include <glTraceCommon.h>
#include <generated.h>

#define glGlobalAlphaFactordSUN_wrp						\
    ((void  (*)(GLdouble factor                                        \
    ))GL_ENTRY_PTR(glGlobalAlphaFactordSUN_Idx))


GLAPI void  APIENTRY glGlobalAlphaFactordSUN(GLdouble factor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGlobalAlphaFactordSUN_Idx))
	{
            GL_ENTRY_PTR(glGlobalAlphaFactordSUN_Idx) = dlsym(RTLD_NEXT,"glGlobalAlphaFactordSUN");
            if(!GL_ENTRY_PTR(glGlobalAlphaFactordSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGlobalAlphaFactordSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glGlobalAlphaFactordSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGlobalAlphaFactordSUN_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGlobalAlphaFactordSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGlobalAlphaFactordSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glGlobalAlphaFactordSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGlobalAlphaFactordSUN_Idx),
				 GL_ENTRY_LAST_TS(glGlobalAlphaFactordSUN_Idx));
        if(last_diff > 1000000000){
            printf("glGlobalAlphaFactordSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactordSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactordSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactordSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactordSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGlobalAlphaFactordSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactordSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGlobalAlphaFactordSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGlobalAlphaFactordSUN_Idx) = get_ts();
        }


	

}