#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribLPointer_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexAttribLPointer_Idx))


GLAPI void  APIENTRY glVertexAttribLPointer(GLuint index,GLint size,GLenum type,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexAttribLPointer_Idx))
	{
            GL_ENTRY_PTR(glVertexAttribLPointer_Idx) = dlsym(RTLD_NEXT,"glVertexAttribLPointer");
            if(!GL_ENTRY_PTR(glVertexAttribLPointer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexAttribLPointer_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribLPointer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribLPointer_wrp(index,size,type,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribLPointer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribLPointer_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribLPointer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribLPointer_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribLPointer_Idx));
        if(last_diff > 1000000000){
            printf("glVertexAttribLPointer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribLPointer_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribLPointer_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribLPointer_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribLPointer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribLPointer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribLPointer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribLPointer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribLPointer_Idx) = get_ts();
        }


	

}