#include <glTraceCommon.h>
#include <generated.h>

#define glNamedFramebufferTextureLayerEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level,GLint layer                                        \
    ))GL_ENTRY_PTR(glNamedFramebufferTextureLayerEXT_Idx))


GLAPI void  APIENTRY glNamedFramebufferTextureLayerEXT(GLuint framebuffer,GLenum attachment,GLuint texture,GLint level,GLint layer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedFramebufferTextureLayerEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedFramebufferTextureLayerEXT_Idx) = dlsym(RTLD_NEXT,"glNamedFramebufferTextureLayerEXT");
            if(!GL_ENTRY_PTR(glNamedFramebufferTextureLayerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedFramebufferTextureLayerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedFramebufferTextureLayerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedFramebufferTextureLayerEXT_wrp(framebuffer,attachment,texture,level,layer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedFramebufferTextureLayerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureLayerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedFramebufferTextureLayerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedFramebufferTextureLayerEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedFramebufferTextureLayerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedFramebufferTextureLayerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureLayerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureLayerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureLayerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureLayerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedFramebufferTextureLayerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedFramebufferTextureLayerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedFramebufferTextureLayerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedFramebufferTextureLayerEXT_Idx) = get_ts();
        }


	

}