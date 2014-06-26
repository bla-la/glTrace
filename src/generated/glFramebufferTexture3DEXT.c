#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTexture3DEXT_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset                                        \
    ))GL_ENTRY_PTR(glFramebufferTexture3DEXT_Idx))


GLAPI void  APIENTRY glFramebufferTexture3DEXT(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTexture3DEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTexture3DEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTexture3DEXT_wrp(target,attachment,textarget,texture,level,zoffset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTexture3DEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTexture3DEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTexture3DEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTexture3DEXT_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTexture3DEXT_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTexture3DEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture3DEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture3DEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture3DEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTexture3DEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTexture3DEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTexture3DEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTexture3DEXT_Idx) = get_ts();
        }


	

}