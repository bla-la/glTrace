#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexAttribOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexAttribOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexAttribOffsetEXT(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexAttribOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexAttribOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexAttribOffsetEXT_wrp(vaobj,buffer,index,size,type,normalized,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexAttribOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexAttribOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexAttribOffsetEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexArrayVertexAttribOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexAttribOffsetEXT_Idx) = get_ts();
        }


	

}