#include <glTraceCommon.h>
#include <generated.h>

#define glCheckNamedFramebufferStatusEXT_wrp						\
    ((GLenum  (*)(GLuint framebuffer,GLenum target                                        \
    ))GL_ENTRY_PTR(glCheckNamedFramebufferStatusEXT_Idx))


GLAPI GLenum  APIENTRY glCheckNamedFramebufferStatusEXT(GLuint framebuffer,GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCheckNamedFramebufferStatusEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCheckNamedFramebufferStatusEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glCheckNamedFramebufferStatusEXT_wrp(framebuffer,target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCheckNamedFramebufferStatusEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCheckNamedFramebufferStatusEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCheckNamedFramebufferStatusEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCheckNamedFramebufferStatusEXT_Idx),
				 GL_ENTRY_LAST_TS(glCheckNamedFramebufferStatusEXT_Idx));


        if(last_diff > 1000000000){
            printf("glCheckNamedFramebufferStatusEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCheckNamedFramebufferStatusEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCheckNamedFramebufferStatusEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCheckNamedFramebufferStatusEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCheckNamedFramebufferStatusEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCheckNamedFramebufferStatusEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCheckNamedFramebufferStatusEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCheckNamedFramebufferStatusEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCheckNamedFramebufferStatusEXT_Idx) = get_ts();
        }


	return retval;

}