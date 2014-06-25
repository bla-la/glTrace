#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteFramebuffersOES_wrp						\
    ((void  (*)(GLsizei n,const GLuint *framebuffers                                        \
    ))GL_ENTRY_PTR(glDeleteFramebuffersOES_Idx))


GLAPI void  APIENTRY glDeleteFramebuffersOES(GLsizei n,const GLuint *framebuffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteFramebuffersOES_Idx))
	{
            GL_ENTRY_PTR(glDeleteFramebuffersOES_Idx) = dlsym(RTLD_NEXT,"glDeleteFramebuffersOES");
            if(!GL_ENTRY_PTR(glDeleteFramebuffersOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteFramebuffersOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteFramebuffersOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteFramebuffersOES_wrp(n,framebuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteFramebuffersOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteFramebuffersOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteFramebuffersOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteFramebuffersOES_Idx),
				 GL_ENTRY_LAST_TS(glDeleteFramebuffersOES_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteFramebuffersOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteFramebuffersOES_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFramebuffersOES_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFramebuffersOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteFramebuffersOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteFramebuffersOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteFramebuffersOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteFramebuffersOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteFramebuffersOES_Idx) = get_ts();
        }


	

}