#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribIPointer_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexAttribIPointer_Idx))


GLAPI void  APIENTRY glVertexAttribIPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribIPointer_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribIPointer_Idx) = dlsym(RTLD_NEXT,"glVertexAttribIPointer");
            if(!GL_ENTRY_PTR(glVertexAttribIPointer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribIPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribIPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribIPointer_wrp(index,size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribIPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribIPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribIPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribIPointer_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribIPointer_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribIPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribIPointer_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribIPointer_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribIPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribIPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribIPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribIPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribIPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribIPointer_Idx) = get_ts();
        }


	

}