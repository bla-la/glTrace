#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribIivEXT_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribIivEXT_Idx))


GLAPI void  APIENTRY glGetVertexAttribIivEXT(GLuint index,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribIivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribIivEXT_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribIivEXT");
            if(!GL_ENTRY_PTR(glGetVertexAttribIivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribIivEXT_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribIivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribIivEXT_Idx) = get_ts();
        }


	

}