#include <glTraceCommon.h>
#include <generated.h>

#define glMakeTextureHandleResidentARB_wrp						\
    ((void  (*)(GLuint64 handle                                        \
    ))GL_ENTRY_PTR(glMakeTextureHandleResidentARB_Idx))


GLAPI void  APIENTRY glMakeTextureHandleResidentARB(GLuint64 handle)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMakeTextureHandleResidentARB_Idx))
	{
            GL_ENTRY_PTR(glMakeTextureHandleResidentARB_Idx) = dlsym(RTLD_NEXT,"glMakeTextureHandleResidentARB");
            if(!GL_ENTRY_PTR(glMakeTextureHandleResidentARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMakeTextureHandleResidentARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeTextureHandleResidentARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeTextureHandleResidentARB_wrp(handle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeTextureHandleResidentARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeTextureHandleResidentARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeTextureHandleResidentARB_Idx),
				 GL_ENTRY_LAST_TS(glMakeTextureHandleResidentARB_Idx));
        if(last_diff > 1000000000){
            printf("glMakeTextureHandleResidentARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeTextureHandleResidentARB_Idx),
	             GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentARB_Idx),
	             GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeTextureHandleResidentARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeTextureHandleResidentARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeTextureHandleResidentARB_Idx) = get_ts();
        }


	

}