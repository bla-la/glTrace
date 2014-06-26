#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexAttribIOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexAttribIOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexAttribIOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexAttribIOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexAttribIOffsetEXT_wrp(vaobj,buffer,index,size,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribIOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexAttribIOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexAttribIOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexAttribIOffsetEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexArrayVertexAttribIOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribIOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribIOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribIOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribIOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexAttribIOffsetEXT_Idx) = get_ts();
        }


	

}