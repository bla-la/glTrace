#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexAttribFormatEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLboolean normalized,GLuint relativeoffset                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexAttribFormatEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexAttribFormatEXT(GLuint vaobj,GLuint attribindex,GLint size,GLenum type,GLboolean normalized,GLuint relativeoffset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayVertexAttribFormatEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayVertexAttribFormatEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayVertexAttribFormatEXT");
            if(!GL_ENTRY_PTR(glVertexArrayVertexAttribFormatEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexAttribFormatEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexAttribFormatEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexAttribFormatEXT_wrp(vaobj,attribindex,size,type,normalized,relativeoffset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribFormatEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribFormatEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexAttribFormatEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexAttribFormatEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexAttribFormatEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayVertexAttribFormatEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribFormatEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribFormatEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribFormatEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribFormatEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribFormatEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribFormatEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribFormatEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexAttribFormatEXT_Idx) = get_ts();
        }


	

}