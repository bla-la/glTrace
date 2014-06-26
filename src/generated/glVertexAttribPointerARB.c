#include <glTraceCommon.h>
#include <generated.h>

#define glVertexAttribPointerARB_wrp						\
    ((void  (*)(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer                                        \
    ))GL_ENTRY_PTR(glVertexAttribPointerARB_Idx))


GLAPI void  APIENTRY glVertexAttribPointerARB(GLuint index,GLint size,GLenum type,GLboolean normalized,GLsizei stride,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVertexAttribPointerARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glVertexAttribPointerARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVertexAttribPointerARB_wrp(index,size,type,normalized,stride,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVertexAttribPointerARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVertexAttribPointerARB_Idx) ++;

        GL_ENTRY_LAST_TS(glVertexAttribPointerARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVertexAttribPointerARB_Idx),
				 GL_ENTRY_LAST_TS(glVertexAttribPointerARB_Idx));


        if(last_diff > 1000000000){
            printf("glVertexAttribPointerARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVertexAttribPointerARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribPointerARB_Idx),
	             GL_ENTRY_CALL_TIME(glVertexAttribPointerARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glVertexAttribPointerARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVertexAttribPointerARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVertexAttribPointerARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVertexAttribPointerARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVertexAttribPointerARB_Idx) = get_ts();
        }


	

}