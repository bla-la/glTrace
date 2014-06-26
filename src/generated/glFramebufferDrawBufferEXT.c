#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferDrawBufferEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum mode                                        \
    ))GL_ENTRY_PTR(glFramebufferDrawBufferEXT_Idx))


GLAPI void  APIENTRY glFramebufferDrawBufferEXT(GLuint framebuffer,GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferDrawBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferDrawBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferDrawBufferEXT_wrp(framebuffer,mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferDrawBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferDrawBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferDrawBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferDrawBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferDrawBufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferDrawBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferDrawBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferDrawBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferDrawBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferDrawBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferDrawBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferDrawBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferDrawBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferDrawBufferEXT_Idx) = get_ts();
        }


	

}