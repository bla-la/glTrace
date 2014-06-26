#include <glTraceCommon.h>
#include <generated.h>

#define glBindVertexBuffers_wrp						\
    ((void  (*)(GLuint first,GLsizei count,const GLuint *buffers,const GLintptr *offsets,const GLsizei *strides                                        \
    ))GL_ENTRY_PTR(glBindVertexBuffers_Idx))


GLAPI void  APIENTRY glBindVertexBuffers(GLuint first,GLsizei count,const GLuint *buffers,const GLintptr *offsets,const GLsizei *strides)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindVertexBuffers_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindVertexBuffers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindVertexBuffers_wrp(first,count,buffers,offsets,strides);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindVertexBuffers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindVertexBuffers_Idx) ++;

        GL_ENTRY_LAST_TS(glBindVertexBuffers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindVertexBuffers_Idx),
				 GL_ENTRY_LAST_TS(glBindVertexBuffers_Idx));


        if(last_diff > 1000000000){
            printf("glBindVertexBuffers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindVertexBuffers_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexBuffers_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexBuffers_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindVertexBuffers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindVertexBuffers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindVertexBuffers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindVertexBuffers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindVertexBuffers_Idx) = get_ts();
        }


	

}