#include <glTraceCommon.h>
#include <generated.h>

#define glValidateProgramARB_wrp						\
    ((void  (*)(GLhandleARB programObj                                        \
    ))GL_ENTRY_PTR(glValidateProgramARB_Idx))


GLAPI void  APIENTRY glValidateProgramARB(GLhandleARB programObj)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glValidateProgramARB_Idx))
	{
            GL_ENTRY_PTR(glValidateProgramARB_Idx) = dlsym(RTLD_NEXT,"glValidateProgramARB");
            if(!GL_ENTRY_PTR(glValidateProgramARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glValidateProgramARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glValidateProgramARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glValidateProgramARB_wrp(programObj);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glValidateProgramARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glValidateProgramARB_Idx) ++;

        GL_ENTRY_LAST_TS(glValidateProgramARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glValidateProgramARB_Idx),
				 GL_ENTRY_LAST_TS(glValidateProgramARB_Idx));
        if(last_diff > 1000000000){
            printf("glValidateProgramARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glValidateProgramARB_Idx),
	             GL_ENTRY_CALL_TIME(glValidateProgramARB_Idx),
	             GL_ENTRY_CALL_TIME(glValidateProgramARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glValidateProgramARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glValidateProgramARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glValidateProgramARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glValidateProgramARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glValidateProgramARB_Idx) = get_ts();
        }


	

}