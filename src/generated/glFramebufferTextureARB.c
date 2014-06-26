#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTextureARB_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glFramebufferTextureARB_Idx))


GLAPI void  APIENTRY glFramebufferTextureARB(GLenum target,GLenum attachment,GLuint texture,GLint level)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTextureARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTextureARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTextureARB_wrp(target,attachment,texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTextureARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTextureARB_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTextureARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTextureARB_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTextureARB_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTextureARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureARB_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureARB_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTextureARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTextureARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTextureARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTextureARB_Idx) = get_ts();
        }


	

}