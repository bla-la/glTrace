#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTextureEXT_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glFramebufferTextureEXT_Idx))


GLAPI void  APIENTRY glFramebufferTextureEXT(GLenum target,GLenum attachment,GLuint texture,GLint level)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTextureEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTextureEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTextureEXT_wrp(target,attachment,texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTextureEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTextureEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTextureEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTextureEXT_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTextureEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTextureEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTextureEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTextureEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTextureEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTextureEXT_Idx) = get_ts();
        }


	

}