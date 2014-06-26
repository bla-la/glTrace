#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribIuiv_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribIuiv_Idx))


GLAPI void  APIENTRY glGetVertexAttribIuiv(GLuint index,GLenum pname,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexAttribIuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribIuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribIuiv_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribIuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribIuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribIuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribIuiv_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribIuiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexAttribIuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribIuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribIuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribIuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribIuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribIuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribIuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribIuiv_Idx) = get_ts();
        }


	

}