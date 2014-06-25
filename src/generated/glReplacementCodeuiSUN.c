#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuiSUN_wrp						\
    ((void  (*)(GLuint code                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuiSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuiSUN(GLuint code)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReplacementCodeuiSUN_Idx))
	{
            GL_ENTRY_PTR(glReplacementCodeuiSUN_Idx) = dlsym(RTLD_NEXT,"glReplacementCodeuiSUN");
            if(!GL_ENTRY_PTR(glReplacementCodeuiSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReplacementCodeuiSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuiSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuiSUN_wrp(code);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuiSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuiSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuiSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuiSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuiSUN_Idx));
        if(last_diff > 1000000000){
            printf("glReplacementCodeuiSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuiSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuiSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuiSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuiSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuiSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuiSUN_Idx) = get_ts();
        }


	

}