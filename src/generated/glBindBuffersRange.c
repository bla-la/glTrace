#include <glTraceCommon.h>
#include <generated.h>

#define glBindBuffersRange_wrp						\
    ((void  (*)(GLenum target,GLuint first,GLsizei count,const GLuint *buffers,const GLintptr *offsets,const GLsizeiptr *sizes                                        \
    ))GL_ENTRY_PTR(glBindBuffersRange_Idx))


GLAPI void  APIENTRY glBindBuffersRange(GLenum target,GLuint first,GLsizei count,const GLuint *buffers,const GLintptr *offsets,const GLsizeiptr *sizes)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindBuffersRange_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindBuffersRange_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindBuffersRange_wrp(target,first,count,buffers,offsets,sizes);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindBuffersRange_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindBuffersRange_Idx) ++;

        GL_ENTRY_LAST_TS(glBindBuffersRange_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindBuffersRange_Idx),
				 GL_ENTRY_LAST_TS(glBindBuffersRange_Idx));


        if(last_diff > 1000000000){
            printf("glBindBuffersRange %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindBuffersRange_Idx),
	             GL_ENTRY_CALL_TIME(glBindBuffersRange_Idx),
	             GL_ENTRY_CALL_TIME(glBindBuffersRange_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindBuffersRange_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindBuffersRange_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindBuffersRange_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindBuffersRange_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindBuffersRange_Idx) = get_ts();
        }


	

}