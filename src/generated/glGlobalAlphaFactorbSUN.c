#include <glTraceCommon.h>
#include <generated.h>

#define glGlobalAlphaFactorbSUN_wrp						\
    ((void  (*)(GLbyte factor                                        \
    ))GL_ENTRY_PTR(glGlobalAlphaFactorbSUN_Idx))


GLAPI void  APIENTRY glGlobalAlphaFactorbSUN(GLbyte factor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGlobalAlphaFactorbSUN_Idx))
	{
            GL_ENTRY_PTR(glGlobalAlphaFactorbSUN_Idx) = dlsym(RTLD_NEXT,"glGlobalAlphaFactorbSUN");
            if(!GL_ENTRY_PTR(glGlobalAlphaFactorbSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGlobalAlphaFactorbSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glGlobalAlphaFactorbSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGlobalAlphaFactorbSUN_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGlobalAlphaFactorbSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorbSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glGlobalAlphaFactorbSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGlobalAlphaFactorbSUN_Idx),
				 GL_ENTRY_LAST_TS(glGlobalAlphaFactorbSUN_Idx));
        if(last_diff > 1000000000){
            printf("glGlobalAlphaFactorbSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorbSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorbSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorbSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorbSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGlobalAlphaFactorbSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorbSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorbSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGlobalAlphaFactorbSUN_Idx) = get_ts();
        }


	

}