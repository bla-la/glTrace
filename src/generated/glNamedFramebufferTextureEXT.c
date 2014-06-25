#include <glTraceCommon.h>
#include <generated.h>

#define glNamedFramebufferTextureEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glNamedFramebufferTextureEXT_Idx))


GLAPI void  APIENTRY glNamedFramebufferTextureEXT(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedFramebufferTextureEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedFramebufferTextureEXT_Idx) = dlsym(RTLD_NEXT,"glNamedFramebufferTextureEXT");
            if(!GL_ENTRY_PTR(glNamedFramebufferTextureEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedFramebufferTextureEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedFramebufferTextureEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedFramebufferTextureEXT_wrp(framebuffer,attachment,texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedFramebufferTextureEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedFramebufferTextureEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedFramebufferTextureEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedFramebufferTextureEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedFramebufferTextureEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedFramebufferTextureEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedFramebufferTextureEXT_Idx) = get_ts();
        }


	

}