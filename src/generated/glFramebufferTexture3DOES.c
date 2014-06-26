#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTexture3DOES_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset                                        \
    ))GL_ENTRY_PTR(glFramebufferTexture3DOES_Idx))


GLAPI void  APIENTRY glFramebufferTexture3DOES(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLint zoffset)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTexture3DOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTexture3DOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTexture3DOES_wrp(target,attachment,textarget,texture,level,zoffset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTexture3DOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTexture3DOES_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTexture3DOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTexture3DOES_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTexture3DOES_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTexture3DOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture3DOES_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture3DOES_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture3DOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture3DOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTexture3DOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTexture3DOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTexture3DOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTexture3DOES_Idx) = get_ts();
        }


	

}