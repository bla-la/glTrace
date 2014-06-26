#include <glTraceCommon.h>
#include <generated.h>

#define glReplacementCodeubSUN_wrp						\
    ((void  (*)(GLubyte code                                        \
    ))GL_ENTRY_PTR(glReplacementCodeubSUN_Idx))


GLAPI void  APIENTRY glReplacementCodeubSUN(GLubyte code)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReplacementCodeubSUN_Idx))
    	{
            GL_ENTRY_PREV_TS(glReplacementCodeubSUN_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReplacementCodeubSUN_wrp(code);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReplacementCodeubSUN_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReplacementCodeubSUN_Idx) ++;

        GL_ENTRY_LAST_TS(glReplacementCodeubSUN_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReplacementCodeubSUN_Idx),
				 GL_ENTRY_LAST_TS(glReplacementCodeubSUN_Idx));


        if(last_diff > 1000000000){
            printf("glReplacementCodeubSUN %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReplacementCodeubSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeubSUN_Idx),
	             GL_ENTRY_CALL_TIME(glReplacementCodeubSUN_Idx) /
	             GL_ENTRY_CALL_COUNT(glReplacementCodeubSUN_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReplacementCodeubSUN_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReplacementCodeubSUN_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReplacementCodeubSUN_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReplacementCodeubSUN_Idx) = get_ts();
        }


	

}