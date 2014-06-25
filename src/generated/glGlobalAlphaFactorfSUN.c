#include <glTraceCommon.h>
#include <generated.h>

#define glGlobalAlphaFactorfSUN_wrp						\
    ((void  (*)(GLfloat factor                                        \
    ))GL_ENTRY_PTR(glGlobalAlphaFactorfSUN_Idx))


GLAPI void  APIENTRY glGlobalAlphaFactorfSUN(GLfloat factor)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGlobalAlphaFactorfSUN_Idx))
	{
            GL_ENTRY_PTR(glGlobalAlphaFactorfSUN_Idx) = dlsym(RTLD_NEXT,"glGlobalAlphaFactorfSUN");
            if(!GL_ENTRY_PTR(glGlobalAlphaFactorfSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGlobalAlphaFactorfSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glGlobalAlphaFactorfSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGlobalAlphaFactorfSUN_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGlobalAlphaFactorfSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorfSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glGlobalAlphaFactorfSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGlobalAlphaFactorfSUN_Idx),
				 GL_ENTRY_LAST_TS(glGlobalAlphaFactorfSUN_Idx));
        if(last_diff > 1000000000){
            printf("glGlobalAlphaFactorfSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorfSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorfSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorfSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorfSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGlobalAlphaFactorfSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactorfSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGlobalAlphaFactorfSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGlobalAlphaFactorfSUN_Idx) = get_ts();
        }


	

}