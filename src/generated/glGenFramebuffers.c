#include <glTraceCommon.h>
#include <generated.h>

#define glGenFramebuffers_wrp						\
    ((void  (*)(GLsizei n,GLuint *framebuffers                                        \
    ))GL_ENTRY_PTR(glGenFramebuffers_Idx))


GLAPI void  APIENTRY glGenFramebuffers(GLsizei n,GLuint *framebuffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenFramebuffers_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenFramebuffers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenFramebuffers_wrp(n,framebuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenFramebuffers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenFramebuffers_Idx) ++;

        GL_ENTRY_LAST_TS(glGenFramebuffers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenFramebuffers_Idx),
				 GL_ENTRY_LAST_TS(glGenFramebuffers_Idx));


        if(last_diff > 1000000000){
            printf("glGenFramebuffers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenFramebuffers_Idx),
	             GL_ENTRY_CALL_TIME(glGenFramebuffers_Idx),
	             GL_ENTRY_CALL_TIME(glGenFramebuffers_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenFramebuffers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenFramebuffers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenFramebuffers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenFramebuffers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenFramebuffers_Idx) = get_ts();
        }


	

}