#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferReadBufferEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum mode                                        \
    ))GL_ENTRY_PTR(glFramebufferReadBufferEXT_Idx))


GLAPI void  APIENTRY glFramebufferReadBufferEXT(GLuint framebuffer,GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFramebufferReadBufferEXT_Idx))
	{
            GL_ENTRY_PTR(glFramebufferReadBufferEXT_Idx) = dlsym(RTLD_NEXT,"glFramebufferReadBufferEXT");
            if(!GL_ENTRY_PTR(glFramebufferReadBufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFramebufferReadBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferReadBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferReadBufferEXT_wrp(framebuffer,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferReadBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferReadBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferReadBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferReadBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferReadBufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glFramebufferReadBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferReadBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferReadBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferReadBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferReadBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferReadBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferReadBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferReadBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferReadBufferEXT_Idx) = get_ts();
        }


	

}