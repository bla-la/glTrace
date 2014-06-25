#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribIPointerEXT_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexAttribIPointerEXT_Idx))


GLAPI void  APIENTRY glVertexAttribIPointerEXT(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribIPointerEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribIPointerEXT_Idx) = dlsym(RTLD_NEXT,"glVertexAttribIPointerEXT");
            if(!GL_ENTRY_PTR(glVertexAttribIPointerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribIPointerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribIPointerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribIPointerEXT_wrp(index,size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribIPointerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribIPointerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribIPointerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribIPointerEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribIPointerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribIPointerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribIPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribIPointerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribIPointerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribIPointerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribIPointerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribIPointerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribIPointerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribIPointerEXT_Idx) = get_ts();
        }


	

}