#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexAttribLFormatEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexAttribLFormatEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexAttribLFormatEXT(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLuint relativeoffset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayVertexAttribLFormatEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayVertexAttribLFormatEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayVertexAttribLFormatEXT");
            if(!GL_ENTRY_PTR(glVertexArrayVertexAttribLFormatEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexAttribLFormatEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexAttribLFormatEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexAttribLFormatEXT_wrp(vaobj,attribindex,size,type,relativeoffset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLFormatEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribLFormatEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexAttribLFormatEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexAttribLFormatEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexAttribLFormatEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayVertexAttribLFormatEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribLFormatEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLFormatEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLFormatEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribLFormatEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLFormatEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribLFormatEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLFormatEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexAttribLFormatEXT_Idx) = get_ts();
        }


	

}