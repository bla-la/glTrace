#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTextureLayer_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer                                        \
    ))GL_ENTRY_PTR(glFramebufferTextureLayer_Idx))


GLAPI void  APIENTRY glFramebufferTextureLayer(GLenum target,GLenum attachment,GLuint texture,GLint level,GLint layer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTextureLayer_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTextureLayer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTextureLayer_wrp(target,attachment,texture,level,layer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTextureLayer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTextureLayer_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTextureLayer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTextureLayer_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTextureLayer_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTextureLayer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureLayer_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureLayer_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureLayer_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureLayer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTextureLayer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTextureLayer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTextureLayer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTextureLayer_Idx) = get_ts();
        }


	

}