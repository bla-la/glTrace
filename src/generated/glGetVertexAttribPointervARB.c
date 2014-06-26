#include <glTraceCommon.h>
#include <generated.h>

#define glGetVertexAttribPointervARB_wrp						\
    ((void  (*)(GLuint index,GLenum pname,void **pointer                                        \
    ))GL_ENTRY_PTR(glGetVertexAttribPointervARB_Idx))


GLAPI void  APIENTRY glGetVertexAttribPointervARB(GLuint index,GLenum pname,void **pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVertexAttribPointervARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVertexAttribPointervARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVertexAttribPointervARB_wrp(index,pname,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVertexAttribPointervARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVertexAttribPointervARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVertexAttribPointervARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVertexAttribPointervARB_Idx),
				 GL_ENTRY_LAST_TS(glGetVertexAttribPointervARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetVertexAttribPointervARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointervARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribPointervARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetVertexAttribPointervARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointervARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVertexAttribPointervARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVertexAttribPointervARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVertexAttribPointervARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVertexAttribPointervARB_Idx) = get_ts();
        }


	

}