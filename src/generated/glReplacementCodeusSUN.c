#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeusSUN_wrp						\
    ((void  (*)(GLushort code                                        \
    ))GL_ENTRY_PTR(glReplacementCodeusSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeusSUN(GLushort code)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReplacementCodeusSUN_Idx))
	{
            GL_ENTRY_PTR(glReplacementCodeusSUN_Idx) = dlsym(RTLD_NEXT,"glReplacementCodeusSUN");
            if(!GL_ENTRY_PTR(glReplacementCodeusSUN_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReplacementCodeusSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeusSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeusSUN_wrp(code);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeusSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeusSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeusSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeusSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeusSUN_Idx));
        if(last_diff > 1000000000){
            printf("glReplacementCodeusSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeusSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeusSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeusSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeusSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeusSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeusSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeusSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeusSUN_Idx) = get_ts();
        }


	

}