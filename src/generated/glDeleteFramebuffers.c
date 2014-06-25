#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteFramebuffers_wrp						\
    ((void  (*)(GLsizei n,const GLuint *framebuffers                                        \
    ))GL_ENTRY_PTR(glDeleteFramebuffers_Idx))


GLAPI void  APIENTRY glDeleteFramebuffers(GLsizei n,const GLuint *framebuffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteFramebuffers_Idx))
	{
            GL_ENTRY_PTR(glDeleteFramebuffers_Idx) = dlsym(RTLD_NEXT,"glDeleteFramebuffers");
            if(!GL_ENTRY_PTR(glDeleteFramebuffers_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteFramebuffers_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteFramebuffers_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteFramebuffers_wrp(n,framebuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteFramebuffers_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteFramebuffers_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteFramebuffers_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteFramebuffers_Idx),
				 GL_ENTRY_LAST_TS(glDeleteFramebuffers_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteFramebuffers %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteFramebuffers_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFramebuffers_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFramebuffers_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteFramebuffers_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteFramebuffers_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteFramebuffers_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteFramebuffers_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteFramebuffers_Idx) = get_ts();
        }


	

}