#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteBuffers_wrp						\
    ((void  (*)(GLsizei n,const GLuint *buffers                                        \
    ))GL_ENTRY_PTR(glDeleteBuffers_Idx))


GLAPI void  APIENTRY glDeleteBuffers(GLsizei n,const GLuint *buffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteBuffers_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteBuffers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteBuffers_wrp(n,buffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteBuffers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteBuffers_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteBuffers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteBuffers_Idx),
				 GL_ENTRY_LAST_TS(glDeleteBuffers_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteBuffers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteBuffers_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteBuffers_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteBuffers_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteBuffers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteBuffers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteBuffers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteBuffers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteBuffers_Idx) = get_ts();
        }


	

}