#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribIiv_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribIiv_Idx))


GLAPI void  APIENTRY glGetVertexAttribIiv(GLuint index,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribIiv_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribIiv_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribIiv");
            if(!GL_ENTRY_PTR(glGetVertexAttribIiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribIiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribIiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribIiv_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribIiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribIiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribIiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribIiv_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribIiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribIiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribIiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribIiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribIiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribIiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribIiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribIiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribIiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribIiv_Idx) = get_ts();
        }


	

}