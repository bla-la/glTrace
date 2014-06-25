#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribLui64vARB_wrp						\
    ((void  (*)(GLuint index,GLenum pname,GLuint64EXT *params                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribLui64vARB_Idx))


GLAPI void  APIENTRY glGetVertexAttribLui64vARB(GLuint index,GLenum pname,GLuint64EXT *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVertexAttribLui64vARB_Idx))
	{
            GL_ENTRY_PTR(glGetVertexAttribLui64vARB_Idx) = dlsym(RTLD_NEXT,"glGetVertexAttribLui64vARB");
            if(!GL_ENTRY_PTR(glGetVertexAttribLui64vARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVertexAttribLui64vARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribLui64vARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribLui64vARB_wrp(index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribLui64vARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribLui64vARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribLui64vARB_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribLui64vARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetVertexAttribLui64vARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLui64vARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribLui64vARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribLui64vARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribLui64vARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribLui64vARB_Idx) = get_ts();
        }


	

}