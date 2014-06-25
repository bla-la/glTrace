#include <glTraceCommon.h>
#include <generated.h>

#define glBindVertexBuffer_wrp						\
    ((void  (*)(GLuint bindingindex,GLuint buffer,GLintptr offset,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glBindVertexBuffer_Idx))


GLAPI void  APIENTRY glBindVertexBuffer(GLuint bindingindex,GLuint buffer,GLintptr offset,GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindVertexBuffer_Idx))
	{
            GL_ENTRY_PTR(glBindVertexBuffer_Idx) = dlsym(RTLD_NEXT,"glBindVertexBuffer");
            if(!GL_ENTRY_PTR(glBindVertexBuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindVertexBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindVertexBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindVertexBuffer_wrp(bindingindex,buffer,offset,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindVertexBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindVertexBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glBindVertexBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindVertexBuffer_Idx),
				 GL_ENTRY_LAST_TS(glBindVertexBuffer_Idx));
        if(last_diff > 1000000000){
            printf("glBindVertexBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindVertexBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBindVertexBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindVertexBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindVertexBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindVertexBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindVertexBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindVertexBuffer_Idx) = get_ts();
        }


	

}