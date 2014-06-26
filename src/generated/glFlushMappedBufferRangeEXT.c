#include <glTraceCommon.h>
#include <generated.h>

#define glFlushMappedBufferRangeEXT_wrp						\
    ((void  (*)(GLenum target,GLintptr offset,GLsizeiptr length                                        \
    ))GL_ENTRY_PTR(glFlushMappedBufferRangeEXT_Idx))


GLAPI void  APIENTRY glFlushMappedBufferRangeEXT(GLenum target,GLintptr offset,GLsizeiptr length)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFlushMappedBufferRangeEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFlushMappedBufferRangeEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFlushMappedBufferRangeEXT_wrp(target,offset,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFlushMappedBufferRangeEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFlushMappedBufferRangeEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFlushMappedBufferRangeEXT_Idx),
				 GL_ENTRY_LAST_TS(glFlushMappedBufferRangeEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFlushMappedBufferRangeEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRangeEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRangeEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFlushMappedBufferRangeEXT_Idx) = get_ts();
        }


	

}