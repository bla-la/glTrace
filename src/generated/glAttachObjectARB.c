#include <glTraceCommon.h>
#include <generated.h>

#define glAttachObjectARB_wrp						\
    ((void  (*)(GLhandleARB containerObj,GLhandleARB obj                                        \
    ))GL_ENTRY_PTR(glAttachObjectARB_Idx))


GLAPI void  APIENTRY glAttachObjectARB(GLhandleARB containerObj,GLhandleARB obj)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glAttachObjectARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glAttachObjectARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glAttachObjectARB_wrp(containerObj,obj);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glAttachObjectARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glAttachObjectARB_Idx) ++;

        GL_ENTRY_LAST_TS(glAttachObjectARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glAttachObjectARB_Idx),
				 GL_ENTRY_LAST_TS(glAttachObjectARB_Idx));


        if(last_diff > 1000000000){
            printf("glAttachObjectARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glAttachObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glAttachObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glAttachObjectARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glAttachObjectARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glAttachObjectARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glAttachObjectARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glAttachObjectARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glAttachObjectARB_Idx) = get_ts();
        }


	

}