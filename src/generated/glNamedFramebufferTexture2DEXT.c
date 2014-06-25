#include <glTraceCommon.h>
#include <generated.h>

#define glNamedFramebufferTexture2DEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum attachment,GLenum textarget,GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glNamedFramebufferTexture2DEXT_Idx))


GLAPI void  APIENTRY glNamedFramebufferTexture2DEXT(GLuint framebuffer,GLenum attachment,GLenum textarget,GLuint texture,GLint level)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedFramebufferTexture2DEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedFramebufferTexture2DEXT_Idx) = dlsym(RTLD_NEXT,"glNamedFramebufferTexture2DEXT");
            if(!GL_ENTRY_PTR(glNamedFramebufferTexture2DEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedFramebufferTexture2DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedFramebufferTexture2DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedFramebufferTexture2DEXT_wrp(framebuffer,attachment,textarget,texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedFramebufferTexture2DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedFramebufferTexture2DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedFramebufferTexture2DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedFramebufferTexture2DEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedFramebufferTexture2DEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedFramebufferTexture2DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTexture2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTexture2DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTexture2DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTexture2DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedFramebufferTexture2DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedFramebufferTexture2DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedFramebufferTexture2DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedFramebufferTexture2DEXT_Idx) = get_ts();
        }


	

}