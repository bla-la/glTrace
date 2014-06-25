#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteFramebuffersEXT_wrp						\
    ((void  (*)(GLsizei n,const GLuint *framebuffers                                        \
    ))GL_ENTRY_PTR(glDeleteFramebuffersEXT_Idx))


GLAPI void  APIENTRY glDeleteFramebuffersEXT(GLsizei n,const GLuint *framebuffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteFramebuffersEXT_Idx))
	{
            GL_ENTRY_PTR(glDeleteFramebuffersEXT_Idx) = dlsym(RTLD_NEXT,"glDeleteFramebuffersEXT");
            if(!GL_ENTRY_PTR(glDeleteFramebuffersEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteFramebuffersEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteFramebuffersEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteFramebuffersEXT_wrp(n,framebuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteFramebuffersEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteFramebuffersEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteFramebuffersEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteFramebuffersEXT_Idx),
				 GL_ENTRY_LAST_TS(glDeleteFramebuffersEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteFramebuffersEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteFramebuffersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFramebuffersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteFramebuffersEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteFramebuffersEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteFramebuffersEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteFramebuffersEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteFramebuffersEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteFramebuffersEXT_Idx) = get_ts();
        }


	

}