#include <glTraceCommon.h>
#include <generated.h>

#define glMakeImageHandleNonResidentARB_wrp						\
    ((void  (*)(GLuint64 handle                                        \
    ))GL_ENTRY_PTR(glMakeImageHandleNonResidentARB_Idx))


GLAPI void  APIENTRY glMakeImageHandleNonResidentARB(GLuint64 handle)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMakeImageHandleNonResidentARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeImageHandleNonResidentARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeImageHandleNonResidentARB_wrp(handle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeImageHandleNonResidentARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeImageHandleNonResidentARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeImageHandleNonResidentARB_Idx),
				 GL_ENTRY_LAST_TS(glMakeImageHandleNonResidentARB_Idx));


        if(last_diff > 1000000000){
            printf("glMakeImageHandleNonResidentARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeImageHandleNonResidentARB_Idx),
	             GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentARB_Idx),
	             GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeImageHandleNonResidentARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeImageHandleNonResidentARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeImageHandleNonResidentARB_Idx) = get_ts();
        }


	

}