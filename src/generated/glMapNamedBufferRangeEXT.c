#include <glTraceCommon.h>
#include <generated.h>

#define glMapNamedBufferRangeEXT_wrp						\
    ((void * (*)(GLuint buffer,GLintptr offset,GLsizeiptr length,GLbitfield access                                        \
    ))GL_ENTRY_PTR(glMapNamedBufferRangeEXT_Idx))


GLAPI void * APIENTRY glMapNamedBufferRangeEXT(GLuint buffer,GLintptr offset,GLsizeiptr length,GLbitfield access)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMapNamedBufferRangeEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMapNamedBufferRangeEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	void * retval = glMapNamedBufferRangeEXT_wrp(buffer,offset,length,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMapNamedBufferRangeEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMapNamedBufferRangeEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMapNamedBufferRangeEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMapNamedBufferRangeEXT_Idx),
				 GL_ENTRY_LAST_TS(glMapNamedBufferRangeEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMapNamedBufferRangeEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMapNamedBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMapNamedBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMapNamedBufferRangeEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMapNamedBufferRangeEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMapNamedBufferRangeEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMapNamedBufferRangeEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMapNamedBufferRangeEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMapNamedBufferRangeEXT_Idx) = get_ts();
        }


	return retval;

}