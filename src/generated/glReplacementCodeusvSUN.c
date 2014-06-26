#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeusvSUN_wrp						\
    ((void  (*)(const GLushort *code                                        \
    ))GL_ENTRY_PTR(glReplacementCodeusvSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeusvSUN(const GLushort *code)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReplacementCodeusvSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeusvSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeusvSUN_wrp(code);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeusvSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeusvSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeusvSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeusvSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeusvSUN_Idx));


        if(last_diff > 1000000000){
            printf("glReplacementCodeusvSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeusvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeusvSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeusvSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeusvSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeusvSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeusvSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeusvSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeusvSUN_Idx) = get_ts();
        }


	

}