#include <glTraceCommon.h>
#include <generated.h>

#define glIsSyncAPPLE_wrp						\
    ((GLboolean  (*)(GLsync sync                                        \
    ))GL_ENTRY_PTR(glIsSyncAPPLE_Idx))


GLAPI GLboolean  APIENTRY glIsSyncAPPLE(GLsync sync)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsSyncAPPLE_Idx))
	{
            GL_ENTRY_PTR(glIsSyncAPPLE_Idx) = dlsym(RTLD_NEXT,"glIsSyncAPPLE");
            if(!GL_ENTRY_PTR(glIsSyncAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsSyncAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsSyncAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsSyncAPPLE_wrp(sync);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsSyncAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsSyncAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glIsSyncAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsSyncAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glIsSyncAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glIsSyncAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glIsSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glIsSyncAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsSyncAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsSyncAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsSyncAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsSyncAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsSyncAPPLE_Idx) = get_ts();
        }


	return retval;

}