#include <glTraceCommon.h>
#include <generated.h>

#define glWaitSync_wrp						\
    ((void  (*)(GLsync sync,GLbitfield flags,GLuint64 timeout                                        \
    ))GL_ENTRY_PTR(glWaitSync_Idx))


GLAPI void  APIENTRY glWaitSync(GLsync sync,GLbitfield flags,GLuint64 timeout)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWaitSync_Idx))
	{
            GL_ENTRY_PTR(glWaitSync_Idx) = dlsym(RTLD_NEXT,"glWaitSync");
            if(!GL_ENTRY_PTR(glWaitSync_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWaitSync_Idx))
    	{
            GL_ENTRY_PREV_TS(glWaitSync_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWaitSync_wrp(sync,flags,timeout);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWaitSync_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWaitSync_Idx) ++;

        GL_ENTRY_LAST_TS(glWaitSync_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWaitSync_Idx),
				 GL_ENTRY_LAST_TS(glWaitSync_Idx));
        if(last_diff > 1000000000){
            printf("glWaitSync %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWaitSync_Idx),
	             GL_ENTRY_CALL_TIME(glWaitSync_Idx),
	             GL_ENTRY_CALL_TIME(glWaitSync_Idx) /
	             GL_ENTRY_CALL_COUNT(glWaitSync_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWaitSync_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWaitSync_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWaitSync_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWaitSync_Idx) = get_ts();
        }


	

}