#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribLFormatNV_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glVertexAttribLFormatNV_Idx))


GLAPI void  APIENTRY glVertexAttribLFormatNV(GLuint index,GLint size,GLenum type,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribLFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribLFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribLFormatNV_wrp(index,size,type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribLFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribLFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribLFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribLFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribLFormatNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribLFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribLFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribLFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribLFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribLFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribLFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribLFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribLFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribLFormatNV_Idx) = get_ts();
        }


	

}