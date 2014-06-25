#include <glTraceCommon.h>
#include <generated.h>

#define glClientWaitSyncAPPLE_wrp						\
    ((GLenum  (*)(GLsync sync,GLbitfield flags,GLuint64 timeout                                        \
    ))GL_ENTRY_PTR(glClientWaitSyncAPPLE_Idx))


GLAPI GLenum  APIENTRY glClientWaitSyncAPPLE(GLsync sync,GLbitfield flags,GLuint64 timeout)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClientWaitSyncAPPLE_Idx))
	{
            GL_ENTRY_PTR(glClientWaitSyncAPPLE_Idx) = dlsym(RTLD_NEXT,"glClientWaitSyncAPPLE");
            if(!GL_ENTRY_PTR(glClientWaitSyncAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClientWaitSyncAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glClientWaitSyncAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glClientWaitSyncAPPLE_wrp(sync,flags,timeout);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClientWaitSyncAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClientWaitSyncAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glClientWaitSyncAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClientWaitSyncAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glClientWaitSyncAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glClientWaitSyncAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClientWaitSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glClientWaitSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glClientWaitSyncAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glClientWaitSyncAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClientWaitSyncAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClientWaitSyncAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClientWaitSyncAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClientWaitSyncAPPLE_Idx) = get_ts();
        }


	return retval;

}