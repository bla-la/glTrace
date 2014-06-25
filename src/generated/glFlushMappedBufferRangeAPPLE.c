#include <glTraceCommon.h>
#include <generated.h>

#define glFlushMappedBufferRangeAPPLE_wrp						\
    ((void  (*)(GLenum target,GLintptr offset,GLsizeiptr size                                        \
    ))GL_ENTRY_PTR(glFlushMappedBufferRangeAPPLE_Idx))


GLAPI void  APIENTRY glFlushMappedBufferRangeAPPLE(GLenum target,GLintptr offset,GLsizeiptr size)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFlushMappedBufferRangeAPPLE_Idx))
	{
            GL_ENTRY_PTR(glFlushMappedBufferRangeAPPLE_Idx) = dlsym(RTLD_NEXT,"glFlushMappedBufferRangeAPPLE");
            if(!GL_ENTRY_PTR(glFlushMappedBufferRangeAPPLE_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFlushMappedBufferRangeAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glFlushMappedBufferRangeAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFlushMappedBufferRangeAPPLE_wrp(target,offset,size);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFlushMappedBufferRangeAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glFlushMappedBufferRangeAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFlushMappedBufferRangeAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glFlushMappedBufferRangeAPPLE_Idx));
        if(last_diff > 1000000000){
            printf("glFlushMappedBufferRangeAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRangeAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRangeAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFlushMappedBufferRangeAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFlushMappedBufferRangeAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFlushMappedBufferRangeAPPLE_Idx) = get_ts();
        }


	

}