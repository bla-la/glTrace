#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribLPointerEXT_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexAttribLPointerEXT_Idx))


GLAPI void  APIENTRY glVertexAttribLPointerEXT(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribLPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribLPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribLPointerEXT_wrp(index,size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribLPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribLPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribLPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribLPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribLPointerEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribLPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribLPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribLPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribLPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribLPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribLPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribLPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribLPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribLPointerEXT_Idx) = get_ts();
        }


	

}