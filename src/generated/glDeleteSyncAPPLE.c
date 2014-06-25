#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteSyncAPPLE_wrp						\
    ((void  (*)(GLsync sync                                        \
    ))GL_ENTRY_PTR(glDeleteSyncAPPLE_Idx))


GLAPI void  APIENTRY glDeleteSyncAPPLE(GLsync sync)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteSyncAPPLE_Idx))
	{
            GL_ENTRY_PTR(glDeleteSyncAPPLE_Idx) = dlsym(RTLD_NEXT,"glDeleteSyncAPPLE");
            if(!GL_ENTRY_PTR(glDeleteSyncAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteSyncAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteSyncAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteSyncAPPLE_wrp(sync);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteSyncAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteSyncAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteSyncAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteSyncAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glDeleteSyncAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteSyncAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteSyncAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteSyncAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteSyncAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteSyncAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteSyncAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteSyncAPPLE_Idx) = get_ts();
        }


	

}