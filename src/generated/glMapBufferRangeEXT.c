#include <glTraceCommon.h>
#include <generated.h>

#define glMapBufferRangeEXT_wrp						\
    ((void * (*)(GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access                                        \
    ))GL_ENTRY_PTR(glMapBufferRangeEXT_Idx))


GLAPI void * APIENTRY glMapBufferRangeEXT(GLenum target,GLintptr offset,GLsizeiptr length,GLbitfield access)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapBufferRangeEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapBufferRangeEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	void * retval = glMapBufferRangeEXT_wrp(target,offset,length,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapBufferRangeEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapBufferRangeEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMapBufferRangeEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapBufferRangeEXT_Idx),
				 GL_ENTRY_LAST_TS(glMapBufferRangeEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMapBufferRangeEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMapBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMapBufferRangeEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapBufferRangeEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapBufferRangeEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapBufferRangeEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapBufferRangeEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapBufferRangeEXT_Idx) = get_ts();
        }


	return retval;

}