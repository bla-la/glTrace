#include <glTraceCommon.h>
#include <generated.h>

#define glWaitSyncAPPLE_wrp						\
    ((void  (*)(GLsync sync,GLbitfield flags,GLuint64 timeout                                        \
    ))GL_ENTRY_PTR(glWaitSyncAPPLE_Idx))


GLAPI void  APIENTRY glWaitSyncAPPLE(GLsync sync,GLbitfield flags,GLuint64 timeout)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glWaitSyncAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glWaitSyncAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWaitSyncAPPLE_wrp(sync,flags,timeout);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWaitSyncAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWaitSyncAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glWaitSyncAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWaitSyncAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glWaitSyncAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glWaitSyncAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWaitSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glWaitSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glWaitSyncAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glWaitSyncAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWaitSyncAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWaitSyncAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWaitSyncAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWaitSyncAPPLE_Idx) = get_ts();
        }


	

}