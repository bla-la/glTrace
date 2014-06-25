#include <glTraceCommon.h>
#include <generated.h>

#define glNamedFramebufferTextureFaceEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level,GLenum face                                        \
    ))GL_ENTRY_PTR(glNamedFramebufferTextureFaceEXT_Idx))


GLAPI void  APIENTRY glNamedFramebufferTextureFaceEXT(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level,GLenum face)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedFramebufferTextureFaceEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedFramebufferTextureFaceEXT_Idx) = dlsym(RTLD_NEXT,"glNamedFramebufferTextureFaceEXT");
            if(!GL_ENTRY_PTR(glNamedFramebufferTextureFaceEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedFramebufferTextureFaceEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedFramebufferTextureFaceEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedFramebufferTextureFaceEXT_wrp(framebuffer,attachment,texture,level,face);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedFramebufferTextureFaceEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureFaceEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedFramebufferTextureFaceEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedFramebufferTextureFaceEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedFramebufferTextureFaceEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedFramebufferTextureFaceEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureFaceEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureFaceEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureFaceEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureFaceEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedFramebufferTextureFaceEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureFaceEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureFaceEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedFramebufferTextureFaceEXT_Idx) = get_ts();
        }


	

}