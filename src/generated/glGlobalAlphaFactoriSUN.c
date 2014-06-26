#include <glTraceCommon.h>
#include <generated.h>

#define glGlobalAlphaFactoriSUN_wrp						\
    ((void  (*)(GLint factor                                        \
    ))GL_ENTRY_PTR(glGlobalAlphaFactoriSUN_Idx))


GLAPI void  APIENTRY glGlobalAlphaFactoriSUN(GLint factor)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGlobalAlphaFactoriSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glGlobalAlphaFactoriSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGlobalAlphaFactoriSUN_wrp(factor);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGlobalAlphaFactoriSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGlobalAlphaFactoriSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glGlobalAlphaFactoriSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGlobalAlphaFactoriSUN_Idx),
				 GL_ENTRY_LAST_TS(glGlobalAlphaFactoriSUN_Idx));


        if(last_diff > 1000000000){
            printf("glGlobalAlphaFactoriSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactoriSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactoriSUN_Idx),
	             GL_ENTRY_CALL_TIME(glGlobalAlphaFactoriSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactoriSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGlobalAlphaFactoriSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGlobalAlphaFactoriSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGlobalAlphaFactoriSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGlobalAlphaFactoriSUN_Idx) = get_ts();
        }


	

}