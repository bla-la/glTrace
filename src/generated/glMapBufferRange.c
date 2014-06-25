#include <glTraceCommon.h>
#include <generated.h>

#define glMapBufferRange_wrp						\
    ((void * (*)(GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access                                        \
    ))GL_ENTRY_PTR(glMapBufferRange_Idx))


GLAPI void * APIENTRY glMapBufferRange(GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMapBufferRange_Idx))
	{
            GL_ENTRY_PTR(glMapBufferRange_Idx) = dlsym(RTLD_NEXT,"glMapBufferRange");
            if(!GL_ENTRY_PTR(glMapBufferRange_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMapBufferRange_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapBufferRange_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	void * retval = glMapBufferRange_wrp(target,offset,length,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapBufferRange_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapBufferRange_Idx) ++;

        GL_ENTRY_LAST_TS(glMapBufferRange_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapBufferRange_Idx),
				 GL_ENTRY_LAST_TS(glMapBufferRange_Idx));
        if(last_diff > 1000000000){
            printf("glMapBufferRange %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapBufferRange_Idx),
	             GL_ENTRY_CALL_TIME(glMapBufferRange_Idx),
	             GL_ENTRY_CALL_TIME(glMapBufferRange_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapBufferRange_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapBufferRange_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapBufferRange_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapBufferRange_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapBufferRange_Idx) = get_ts();
        }


	return retval;

}