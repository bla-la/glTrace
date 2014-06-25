#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayTexCoordOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayTexCoordOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayTexCoordOffsetEXT(GLuint vaobj,GLuint buffer,GLint size,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayTexCoordOffsetEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayTexCoordOffsetEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayTexCoordOffsetEXT");
            if(!GL_ENTRY_PTR(glVertexArrayTexCoordOffsetEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayTexCoordOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayTexCoordOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayTexCoordOffsetEXT_wrp(vaobj,buffer,size,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayTexCoordOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayTexCoordOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayTexCoordOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayTexCoordOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayTexCoordOffsetEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayTexCoordOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayTexCoordOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayTexCoordOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayTexCoordOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayTexCoordOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayTexCoordOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayTexCoordOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayTexCoordOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayTexCoordOffsetEXT_Idx) = get_ts();
        }


	

}