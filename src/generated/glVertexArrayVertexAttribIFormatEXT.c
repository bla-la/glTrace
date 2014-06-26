#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexAttribIFormatEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexAttribIFormatEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexAttribIFormatEXT(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexAttribIFormatEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexAttribIFormatEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexAttribIFormatEXT_wrp(vaobj,attribindex,size,type,relativeoffset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIFormatEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribIFormatEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexAttribIFormatEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexAttribIFormatEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexAttribIFormatEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexArrayVertexAttribIFormatEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribIFormatEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIFormatEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIFormatEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribIFormatEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIFormatEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribIFormatEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIFormatEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexAttribIFormatEXT_Idx) = get_ts();
        }


	

}