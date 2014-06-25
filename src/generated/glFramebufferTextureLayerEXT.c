#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTextureLayerEXT_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer                                        \
    ))GL_ENTRY_PTR(glFramebufferTextureLayerEXT_Idx))


GLAPI void  APIENTRY glFramebufferTextureLayerEXT(GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFramebufferTextureLayerEXT_Idx))
	{
            GL_ENTRY_PTR(glFramebufferTextureLayerEXT_Idx) = dlsym(RTLD_NEXT,"glFramebufferTextureLayerEXT");
            if(!GL_ENTRY_PTR(glFramebufferTextureLayerEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFramebufferTextureLayerEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTextureLayerEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTextureLayerEXT_wrp(target,attachment,texture,level,layer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTextureLayerEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTextureLayerEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTextureLayerEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTextureLayerEXT_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTextureLayerEXT_Idx));
        if(last_diff > 1000000000){
            printf("glFramebufferTextureLayerEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureLayerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureLayerEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureLayerEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureLayerEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTextureLayerEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTextureLayerEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTextureLayerEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTextureLayerEXT_Idx) = get_ts();
        }


	

}