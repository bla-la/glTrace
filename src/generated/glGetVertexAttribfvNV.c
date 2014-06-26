#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribfvNV_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribfvNV_Idx))


GLAPI void  APIENTRY glGetVertexAttribfvNV(GLuint index,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexAttribfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribfvNV_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexAttribfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribfvNV_Idx) = get_ts();
        }


	

}