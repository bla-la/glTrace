#include <glTraceCommon.h>
#include <generated.h>

#define glVertexArrayVertexAttribLOffsetEXT_wrp						\
    ((void  (*)(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLsizei stride,GLintptr offset                                        \
    ))GL_ENTRY_PTR(glVertexArrayVertexAttribLOffsetEXT_Idx))


GLAPI void  APIENTRY glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj,GLuint buffer,GLuint index,GLint size,GLenum type,GLsizei stride,GLintptr offset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVertexArrayVertexAttribLOffsetEXT_Idx))
	{
            GL_ENTRY_PTR(glVertexArrayVertexAttribLOffsetEXT_Idx) = dlsym(RTLD_NEXT,"glVertexArrayVertexAttribLOffsetEXT");
            if(!GL_ENTRY_PTR(glVertexArrayVertexAttribLOffsetEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVertexArrayVertexAttribLOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexArrayVertexAttribLOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexArrayVertexAttribLOffsetEXT_wrp(vaobj,buffer,index,size,type,stride,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribLOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexArrayVertexAttribLOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexArrayVertexAttribLOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glVertexArrayVertexAttribLOffsetEXT_Idx));
        if(last_diff > 1000000000){
            printf("glVertexArrayVertexAttribLOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribLOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribLOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexArrayVertexAttribLOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexArrayVertexAttribLOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexArrayVertexAttribLOffsetEXT_Idx) = get_ts();
        }


	

}