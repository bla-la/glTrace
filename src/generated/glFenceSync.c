#include <glTraceCommon.h>
#include <generated.h>

#define glFenceSync_wrp						\
    ((GLsync  (*)(GLenum condition,GLbitfield flags                                        \
    ))GL_ENTRY_PTR(glFenceSync_Idx))


GLAPI GLsync  APIENTRY glFenceSync(GLenum condition,GLbitfield flags)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFenceSync_Idx))
	{
            GL_ENTRY_PTR(glFenceSync_Idx) = dlsym(RTLD_NEXT,"glFenceSync");
            if(!GL_ENTRY_PTR(glFenceSync_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFenceSync_Idx))
    	{
            GL_ENTRY_PREV_TS(glFenceSync_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLsync  retval = glFenceSync_wrp(condition,flags);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFenceSync_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFenceSync_Idx) ++;

        GL_ENTRY_LAST_TS(glFenceSync_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFenceSync_Idx),
				 GL_ENTRY_LAST_TS(glFenceSync_Idx));
        if(last_diff > 1000000000){
            printf("glFenceSync %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFenceSync_Idx),
	             GL_ENTRY_CALL_TIME(glFenceSync_Idx),
	             GL_ENTRY_CALL_TIME(glFenceSync_Idx) /
	             GL_ENTRY_CALL_COUNT(glFenceSync_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFenceSync_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFenceSync_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFenceSync_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFenceSync_Idx) = get_ts();
        }


	return retval;

}