#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedFramebufferAttachmentParameterivEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum attachment,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetNamedFramebufferAttachmentParameterivEXT_Idx))


GLAPI void  APIENTRY glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer,GLenum attachment,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetNamedFramebufferAttachmentParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedFramebufferAttachmentParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedFramebufferAttachmentParameterivEXT_wrp(framebuffer,attachment,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedFramebufferAttachmentParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedFramebufferAttachmentParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedFramebufferAttachmentParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedFramebufferAttachmentParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedFramebufferAttachmentParameterivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetNamedFramebufferAttachmentParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedFramebufferAttachmentParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedFramebufferAttachmentParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedFramebufferAttachmentParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedFramebufferAttachmentParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedFramebufferAttachmentParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedFramebufferAttachmentParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedFramebufferAttachmentParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedFramebufferAttachmentParameterivEXT_Idx) = get_ts();
        }


	

}