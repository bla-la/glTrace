#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribIFormatNV_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glVertexAttribIFormatNV_Idx))


GLAPI void  APIENTRY glVertexAttribIFormatNV(GLuint index,GLint size,GLenum type,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribIFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribIFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribIFormatNV_wrp(index,size,type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribIFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribIFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribIFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribIFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribIFormatNV_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribIFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribIFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribIFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribIFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribIFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribIFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribIFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribIFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribIFormatNV_Idx) = get_ts();
        }


	

}