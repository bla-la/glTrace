#include <glTraceCommon.h>
#include <generated.h>

#define glDetachObjectARB_wrp						\
    ((void  (*)(GLhandleARB containerObj,GLhandleARB attachedObj                                        \
    ))GL_ENTRY_PTR(glDetachObjectARB_Idx))


GLAPI void  APIENTRY glDetachObjectARB(GLhandleARB containerObj,GLhandleARB attachedObj)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDetachObjectARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDetachObjectARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDetachObjectARB_wrp(containerObj,attachedObj);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDetachObjectARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDetachObjectARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDetachObjectARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDetachObjectARB_Idx),
				 GL_ENTRY_LAST_TS(glDetachObjectARB_Idx));


        if(last_diff > 1000000000){
            printf("glDetachObjectARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDetachObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glDetachObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glDetachObjectARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDetachObjectARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDetachObjectARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDetachObjectARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDetachObjectARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDetachObjectARB_Idx) = get_ts();
        }


	

}