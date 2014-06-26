#include <glTraceCommon.h>
#include <generated.h>

#define glFlushMappedBufferRange_wrp						\
    ((void  (*)(GLenum target,GLintptr offset,GLsizeiptr length                                        \
    ))GL_ENTRY_PTR(glFlushMappedBufferRange_Idx))


GLAPI void  APIENTRY glFlushMappedBufferRange(GLenum target,GLintptr offset,GLsizeiptr length)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFlushMappedBufferRange_Idx))
    	{
            GL_ENTRY_PREV_TS(glFlushMappedBufferRange_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFlushMappedBufferRange_wrp(target,offset,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFlushMappedBufferRange_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFlushMappedBufferRange_Idx) ++;

        GL_ENTRY_LAST_TS(glFlushMappedBufferRange_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFlushMappedBufferRange_Idx),
				 GL_ENTRY_LAST_TS(glFlushMappedBufferRange_Idx));


        if(last_diff > 1000000000){
            printf("glFlushMappedBufferRange %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRange_Idx),
	             GL_ENTRY_CALL_TIME(glFlushMappedBufferRange_Idx),
	             GL_ENTRY_CALL_TIME(glFlushMappedBufferRange_Idx) /
	             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRange_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFlushMappedBufferRange_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRange_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFlushMappedBufferRange_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFlushMappedBufferRange_Idx) = get_ts();
        }


	

}