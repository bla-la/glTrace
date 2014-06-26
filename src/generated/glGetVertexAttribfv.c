#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribfv_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribfv_Idx))


GLAPI void  APIENTRY glGetVertexAttribfv(GLuint index,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexAttribfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribfv_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribfv_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribfv_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexAttribfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribfv_Idx) = get_ts();
        }


	

}