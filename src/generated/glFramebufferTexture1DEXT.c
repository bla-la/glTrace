#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTexture1DEXT_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glFramebufferTexture1DEXT_Idx))


GLAPI void  APIENTRY glFramebufferTexture1DEXT(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTexture1DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTexture1DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTexture1DEXT_wrp(target,attachment,textarget,texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTexture1DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTexture1DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTexture1DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTexture1DEXT_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTexture1DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTexture1DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture1DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture1DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture1DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTexture1DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTexture1DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTexture1DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTexture1DEXT_Idx) = get_ts();
        }


	

}