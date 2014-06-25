#include <glTraceCommon.h>
#include <generated.h>

#define glIsBufferARB_wrp						\
    ((GLboolean  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glIsBufferARB_Idx))


GLAPI GLboolean  APIENTRY glIsBufferARB(GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsBufferARB_Idx))
	{
            GL_ENTRY_PTR(glIsBufferARB_Idx) = dlsym(RTLD_NEXT,"glIsBufferARB");
            if(!GL_ENTRY_PTR(glIsBufferARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsBufferARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsBufferARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsBufferARB_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsBufferARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsBufferARB_Idx) ++;

        GL_ENTRY_LAST_TS(glIsBufferARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsBufferARB_Idx),
				 GL_ENTRY_LAST_TS(glIsBufferARB_Idx));
        if(last_diff > 1000000000){
            printf("glIsBufferARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsBufferARB_Idx),
	             GL_ENTRY_CALL_TIME(glIsBufferARB_Idx),
	             GL_ENTRY_CALL_TIME(glIsBufferARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsBufferARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsBufferARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsBufferARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsBufferARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsBufferARB_Idx) = get_ts();
        }


	return retval;

}