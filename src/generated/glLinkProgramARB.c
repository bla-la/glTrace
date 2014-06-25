#include <glTraceCommon.h>
#include <generated.h>

#define glLinkProgramARB_wrp						\
    ((void  (*)(GLhandleARB programObj                                        \
    ))GL_ENTRY_PTR(glLinkProgramARB_Idx))


GLAPI void  APIENTRY glLinkProgramARB(GLhandleARB programObj)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glLinkProgramARB_Idx))
	{
            GL_ENTRY_PTR(glLinkProgramARB_Idx) = dlsym(RTLD_NEXT,"glLinkProgramARB");
            if(!GL_ENTRY_PTR(glLinkProgramARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glLinkProgramARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glLinkProgramARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLinkProgramARB_wrp(programObj);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLinkProgramARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLinkProgramARB_Idx) ++;

        GL_ENTRY_LAST_TS(glLinkProgramARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLinkProgramARB_Idx),
				 GL_ENTRY_LAST_TS(glLinkProgramARB_Idx));
        if(last_diff > 1000000000){
            printf("glLinkProgramARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLinkProgramARB_Idx),
	             GL_ENTRY_CALL_TIME(glLinkProgramARB_Idx),
	             GL_ENTRY_CALL_TIME(glLinkProgramARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glLinkProgramARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLinkProgramARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLinkProgramARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLinkProgramARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLinkProgramARB_Idx) = get_ts();
        }


	

}