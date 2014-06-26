#include <glTraceCommon.h>
#include <generated.h>

#define glMakeTextureHandleNonResidentARB_wrp						\
    ((void  (*)(GLuint64 handle                                        \
    ))GL_ENTRY_PTR(glMakeTextureHandleNonResidentARB_Idx))


GLAPI void  APIENTRY glMakeTextureHandleNonResidentARB(GLuint64 handle)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMakeTextureHandleNonResidentARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeTextureHandleNonResidentARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeTextureHandleNonResidentARB_wrp(handle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeTextureHandleNonResidentARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeTextureHandleNonResidentARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeTextureHandleNonResidentARB_Idx),
				 GL_ENTRY_LAST_TS(glMakeTextureHandleNonResidentARB_Idx));


        if(last_diff > 1000000000){
            printf("glMakeTextureHandleNonResidentARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeTextureHandleNonResidentARB_Idx),
	             GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentARB_Idx),
	             GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeTextureHandleNonResidentARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeTextureHandleNonResidentARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeTextureHandleNonResidentARB_Idx) = get_ts();
        }


	

}