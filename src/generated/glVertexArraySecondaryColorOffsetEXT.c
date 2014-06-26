#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArraySecondaryColorOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArraySecondaryColorOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArraySecondaryColorOffsetEXT(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexArraySecondaryColorOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArraySecondaryColorOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArraySecondaryColorOffsetEXT_wrp(vaobj,buffer,size,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArraySecondaryColorOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArraySecondaryColorOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArraySecondaryColorOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArraySecondaryColorOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArraySecondaryColorOffsetEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexArraySecondaryColorOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArraySecondaryColorOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArraySecondaryColorOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArraySecondaryColorOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArraySecondaryColorOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArraySecondaryColorOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArraySecondaryColorOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArraySecondaryColorOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArraySecondaryColorOffsetEXT_Idx) = get_ts();
        }


	

}