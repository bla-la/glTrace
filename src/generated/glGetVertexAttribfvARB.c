#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribfvARB_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribfvARB_Idx))


GLAPI void  APIENTRY glGetVertexAttribfvARB(GLuint index,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexAttribfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribfvARB_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribfvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribfvARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexAttribfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribfvARB_Idx) = get_ts();
        }


	

}