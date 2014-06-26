#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayNormalOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayNormalOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayNormalOffsetEXT(GLuint vaobj,GLuint buffer,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexArrayNormalOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayNormalOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayNormalOffsetEXT_wrp(vaobj,buffer,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayNormalOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayNormalOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayNormalOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayNormalOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayNormalOffsetEXT_Idx));


        if(last_diff > 1000000000){
            printf("glVertexArrayNormalOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayNormalOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayNormalOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayNormalOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayNormalOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayNormalOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayNormalOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayNormalOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayNormalOffsetEXT_Idx) = get_ts();
        }


	

}