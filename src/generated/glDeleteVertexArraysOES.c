#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteVertexArraysOES_wrp						\
    ((void  (*)(GLsizei n,const GLuint *arrays                                        \
    ))GL_ENTRY_PTR(glDeleteVertexArraysOES_Idx))


GLAPI void  APIENTRY glDeleteVertexArraysOES(GLsizei n,const GLuint *arrays)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteVertexArraysOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteVertexArraysOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteVertexArraysOES_wrp(n,arrays);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteVertexArraysOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteVertexArraysOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteVertexArraysOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteVertexArraysOES_Idx),
				 GL_ENTRY_LAST_TS(glDeleteVertexArraysOES_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteVertexArraysOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteVertexArraysOES_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteVertexArraysOES_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteVertexArraysOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteVertexArraysOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteVertexArraysOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteVertexArraysOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteVertexArraysOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteVertexArraysOES_Idx) = get_ts();
        }


	

}