#include <glTraceCommon.h>
#include <generated.h>

#define glClientWaitSync_wrp						\
    ((GLenum  (*)(GLsync sync,GLbitfield flags,GLuint64 timeout                                        \
    ))GL_ENTRY_PTR(glClientWaitSync_Idx))


GLAPI GLenum  APIENTRY glClientWaitSync(GLsync sync,GLbitfield flags,GLuint64 timeout)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClientWaitSync_Idx))
    	{
            GL_ENTRY_PREV_TS(glClientWaitSync_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glClientWaitSync_wrp(sync,flags,timeout);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClientWaitSync_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClientWaitSync_Idx) ++;

        GL_ENTRY_LAST_TS(glClientWaitSync_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClientWaitSync_Idx),
				 GL_ENTRY_LAST_TS(glClientWaitSync_Idx));


        if(last_diff > 1000000000){
            printf("glClientWaitSync %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClientWaitSync_Idx),
	             GL_ENTRY_CALL_TIME(glClientWaitSync_Idx),
	             GL_ENTRY_CALL_TIME(glClientWaitSync_Idx) /
	             GL_ENTRY_CALL_COUNT(glClientWaitSync_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClientWaitSync_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClientWaitSync_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClientWaitSync_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClientWaitSync_Idx) = get_ts();
        }


	return retval;

}