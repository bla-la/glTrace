#include <glTraceCommon.h>
#include <generated.h>

#define glUseProgramObjectARB_wrp						\
    ((void  (*)(GLhandleARB programObj                                        \
    ))GL_ENTRY_PTR(glUseProgramObjectARB_Idx))


GLAPI void  APIENTRY glUseProgramObjectARB(GLhandleARB programObj)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUseProgramObjectARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUseProgramObjectARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUseProgramObjectARB_wrp(programObj);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUseProgramObjectARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUseProgramObjectARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUseProgramObjectARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUseProgramObjectARB_Idx),
				 GL_ENTRY_LAST_TS(glUseProgramObjectARB_Idx));


        if(last_diff > 1000000000){
            printf("glUseProgramObjectARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUseProgramObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glUseProgramObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glUseProgramObjectARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUseProgramObjectARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUseProgramObjectARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUseProgramObjectARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUseProgramObjectARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUseProgramObjectARB_Idx) = get_ts();
        }


	

}