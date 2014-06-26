#include <glTraceCommon.h>
#include <generated.h>

#define glFlushMappedNamedBufferRangeEXT_wrp						\
    ((void  (*)(GLuint buffer,GLintptr offset,GLsizeiptr length                                        \
    ))GL_ENTRY_PTR(glFlushMappedNamedBufferRangeEXT_Idx))


GLAPI void  APIENTRY glFlushMappedNamedBufferRangeEXT(GLuint buffer,GLintptr offset,GLsizeiptr length)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFlushMappedNamedBufferRangeEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFlushMappedNamedBufferRangeEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFlushMappedNamedBufferRangeEXT_wrp(buffer,offset,length);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFlushMappedNamedBufferRangeEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFlushMappedNamedBufferRangeEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFlushMappedNamedBufferRangeEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFlushMappedNamedBufferRangeEXT_Idx),
				 GL_ENTRY_LAST_TS(glFlushMappedNamedBufferRangeEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFlushMappedNamedBufferRangeEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFlushMappedNamedBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFlushMappedNamedBufferRangeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFlushMappedNamedBufferRangeEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFlushMappedNamedBufferRangeEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFlushMappedNamedBufferRangeEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFlushMappedNamedBufferRangeEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFlushMappedNamedBufferRangeEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFlushMappedNamedBufferRangeEXT_Idx) = get_ts();
        }


	

}