#include <glTraceCommon.h>
#include <generated.h>

#define glPollAsyncSGIX_wrp						\
    ((GLint  (*)(GLuint *markerp                                        \
    ))GL_ENTRY_PTR(glPollAsyncSGIX_Idx))


GLAPI GLint  APIENTRY glPollAsyncSGIX(GLuint *markerp)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPollAsyncSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glPollAsyncSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glPollAsyncSGIX_wrp(markerp);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPollAsyncSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPollAsyncSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glPollAsyncSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPollAsyncSGIX_Idx),
				 GL_ENTRY_LAST_TS(glPollAsyncSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glPollAsyncSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPollAsyncSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glPollAsyncSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glPollAsyncSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glPollAsyncSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPollAsyncSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPollAsyncSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPollAsyncSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPollAsyncSGIX_Idx) = get_ts();
        }


	return retval;

}