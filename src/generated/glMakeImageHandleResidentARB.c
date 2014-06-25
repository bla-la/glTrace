#include <glTraceCommon.h>
#include <generated.h>

#define glMakeImageHandleResidentARB_wrp						\
    ((void  (*)(GLuint64 handle,GLenum access                                        \
    ))GL_ENTRY_PTR(glMakeImageHandleResidentARB_Idx))


GLAPI void  APIENTRY glMakeImageHandleResidentARB(GLuint64 handle,GLenum access)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMakeImageHandleResidentARB_Idx))
	{
            GL_ENTRY_PTR(glMakeImageHandleResidentARB_Idx) = dlsym(RTLD_NEXT,"glMakeImageHandleResidentARB");
            if(!GL_ENTRY_PTR(glMakeImageHandleResidentARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMakeImageHandleResidentARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeImageHandleResidentARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeImageHandleResidentARB_wrp(handle,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeImageHandleResidentARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeImageHandleResidentARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeImageHandleResidentARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeImageHandleResidentARB_Idx),
				 GL_ENTRY_LAST_TS(glMakeImageHandleResidentARB_Idx));
        if(last_diff > 1000000000){
            printf("glMakeImageHandleResidentARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeImageHandleResidentARB_Idx),
	             GL_ENTRY_CALL_TIME(glMakeImageHandleResidentARB_Idx),
	             GL_ENTRY_CALL_TIME(glMakeImageHandleResidentARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeImageHandleResidentARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeImageHandleResidentARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeImageHandleResidentARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeImageHandleResidentARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeImageHandleResidentARB_Idx) = get_ts();
        }


	

}