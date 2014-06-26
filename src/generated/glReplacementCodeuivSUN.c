#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeuivSUN_wrp						\
    ((void  (*)(const GLuint *code                                        \
    ))GL_ENTRY_PTR(glReplacementCodeuivSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeuivSUN(const GLuint *code)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReplacementCodeuivSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeuivSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeuivSUN_wrp(code);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeuivSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeuivSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeuivSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeuivSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeuivSUN_Idx));


        if(last_diff > 1000000000){
            printf("glReplacementCodeuivSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuivSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuivSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeuivSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeuivSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeuivSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeuivSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeuivSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeuivSUN_Idx) = get_ts();
        }


	

}