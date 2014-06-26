#include <glTraceCommon.h>
#include <generated.h>

#define glBindProgramARB_wrp						\
    ((void  (*)(GLenum target,GLuint program                                        \
    ))GL_ENTRY_PTR(glBindProgramARB_Idx))


GLAPI void  APIENTRY glBindProgramARB(GLenum target,GLuint program)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindProgramARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindProgramARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindProgramARB_wrp(target,program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindProgramARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindProgramARB_Idx) ++;

        GL_ENTRY_LAST_TS(glBindProgramARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindProgramARB_Idx),
				 GL_ENTRY_LAST_TS(glBindProgramARB_Idx));


        if(last_diff > 1000000000){
            printf("glBindProgramARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindProgramARB_Idx),
	             GL_ENTRY_CALL_TIME(glBindProgramARB_Idx),
	             GL_ENTRY_CALL_TIME(glBindProgramARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindProgramARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindProgramARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindProgramARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindProgramARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindProgramARB_Idx) = get_ts();
        }


	

}