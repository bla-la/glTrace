#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteRenderbuffers_wrp						\
    ((void  (*)(GLsizei n,const GLuint *renderbuffers                                        \
    ))GL_ENTRY_PTR(glDeleteRenderbuffers_Idx))


GLAPI void  APIENTRY glDeleteRenderbuffers(GLsizei n,const GLuint *renderbuffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteRenderbuffers_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteRenderbuffers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteRenderbuffers_wrp(n,renderbuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteRenderbuffers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteRenderbuffers_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteRenderbuffers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteRenderbuffers_Idx),
				 GL_ENTRY_LAST_TS(glDeleteRenderbuffers_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteRenderbuffers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffers_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteRenderbuffers_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteRenderbuffers_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteRenderbuffers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteRenderbuffers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteRenderbuffers_Idx) = get_ts();
        }


	

}