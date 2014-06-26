#include <glTraceCommon.h>
#include <generated.h>

#define glNamedFramebufferTexture3DEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset                                        \
    ))GL_ENTRY_PTR(glNamedFramebufferTexture3DEXT_Idx))


GLAPI void  APIENTRY glNamedFramebufferTexture3DEXT(GLuint framebuffer,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedFramebufferTexture3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedFramebufferTexture3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedFramebufferTexture3DEXT_wrp(framebuffer,attachment,textarget,texture,level,zoffset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedFramebufferTexture3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedFramebufferTexture3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedFramebufferTexture3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedFramebufferTexture3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedFramebufferTexture3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedFramebufferTexture3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTexture3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTexture3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTexture3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTexture3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedFramebufferTexture3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedFramebufferTexture3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedFramebufferTexture3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedFramebufferTexture3DEXT_Idx) = get_ts();
        }


	

}