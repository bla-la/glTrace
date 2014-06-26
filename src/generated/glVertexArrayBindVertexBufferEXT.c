#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayBindVertexBufferEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint bindingindex,GLuint buffer,GLintptr offset,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glVertexArrayBindVertexBufferEXT_Idx))


GLAPI void  APIENTRY glVertexArrayBindVertexBufferEXT(GLuint vaobj,GLuint bindingindex,GLuint buffer,GLintptr offset,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexArrayBindVertexBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayBindVertexBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayBindVertexBufferEXT_wrp(vaobj,bindingindex,buffer,offset,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayBindVertexBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayBindVertexBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayBindVertexBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayBindVertexBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayBindVertexBufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexArrayBindVertexBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayBindVertexBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayBindVertexBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayBindVertexBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayBindVertexBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayBindVertexBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayBindVertexBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayBindVertexBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayBindVertexBufferEXT_Idx) = get_ts();
        }


	

}