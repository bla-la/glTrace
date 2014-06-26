#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexOffsetEXT(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexOffsetEXT_wrp(vaobj,buffer,size,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexOffsetEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexArrayVertexOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexOffsetEXT_Idx) = get_ts();
        }


	

}