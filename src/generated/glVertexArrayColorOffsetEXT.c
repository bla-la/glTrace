#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayColorOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayColorOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayColorOffsetEXT(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayColorOffsetEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayColorOffsetEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayColorOffsetEXT");
            if(!GL_ENTRY_PTR(glVertexArrayColorOffsetEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayColorOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayColorOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayColorOffsetEXT_wrp(vaobj,buffer,size,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayColorOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayColorOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayColorOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayColorOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayColorOffsetEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayColorOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayColorOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayColorOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayColorOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayColorOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayColorOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayColorOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayColorOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayColorOffsetEXT_Idx) = get_ts();
        }


	

}