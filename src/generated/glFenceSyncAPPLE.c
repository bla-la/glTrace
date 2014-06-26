#include <glTraceCommon.h>
#include <generated.h>

#define glFenceSyncAPPLE_wrp						\
    ((GLsync  (*)(GLenum condition,GLbitfield flags                                        \
    ))GL_ENTRY_PTR(glFenceSyncAPPLE_Idx))


GLAPI GLsync  APIENTRY glFenceSyncAPPLE(GLenum condition,GLbitfield flags)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFenceSyncAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glFenceSyncAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLsync  retval = glFenceSyncAPPLE_wrp(condition,flags);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFenceSyncAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFenceSyncAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glFenceSyncAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFenceSyncAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glFenceSyncAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glFenceSyncAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFenceSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFenceSyncAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFenceSyncAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glFenceSyncAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFenceSyncAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFenceSyncAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFenceSyncAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFenceSyncAPPLE_Idx) = get_ts();
        }


	return retval;

}