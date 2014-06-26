#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTextureFaceARB_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLuint texture,GLint level,GLenum face                                        \
    ))GL_ENTRY_PTR(glFramebufferTextureFaceARB_Idx))


GLAPI void  APIENTRY glFramebufferTextureFaceARB(GLenum target,GLenum attachment,GLuint texture,GLint level,GLenum face)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTextureFaceARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTextureFaceARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTextureFaceARB_wrp(target,attachment,texture,level,face);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTextureFaceARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTextureFaceARB_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTextureFaceARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTextureFaceARB_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTextureFaceARB_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTextureFaceARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureFaceARB_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureFaceARB_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTextureFaceARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTextureFaceARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTextureFaceARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTextureFaceARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTextureFaceARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTextureFaceARB_Idx) = get_ts();
        }


	

}