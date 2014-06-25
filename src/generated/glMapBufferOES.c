#include <glTraceCommon.h>
#include <generated.h>

#define glMapBufferOES_wrp						\
    ((void * (*)(GLenum target,GLenum access                                        \
    ))GL_ENTRY_PTR(glMapBufferOES_Idx))


GLAPI void * APIENTRY glMapBufferOES(GLenum target,GLenum access)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapBufferOES_Idx))
	{
            GL_ENTRY_PTR(glMapBufferOES_Idx) = dlsym(RTLD_NEXT,"glMapBufferOES");
            if(!GL_ENTRY_PTR(glMapBufferOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapBufferOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapBufferOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	void * retval = glMapBufferOES_wrp(target,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapBufferOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapBufferOES_Idx) ++;

        GL_ENTRY_LAST_TS(glMapBufferOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapBufferOES_Idx),
				 GL_ENTRY_LAST_TS(glMapBufferOES_Idx));
        if(last_diff > 1000000000){
            printf("glMapBufferOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapBufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glMapBufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glMapBufferOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapBufferOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapBufferOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapBufferOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapBufferOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapBufferOES_Idx) = get_ts();
        }


	return retval;

}