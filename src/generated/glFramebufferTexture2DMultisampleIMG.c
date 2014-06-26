#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTexture2DMultisampleIMG_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLsizei samples                                        \
    ))GL_ENTRY_PTR(glFramebufferTexture2DMultisampleIMG_Idx))


GLAPI void  APIENTRY glFramebufferTexture2DMultisampleIMG(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level,GLsizei samples)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferTexture2DMultisampleIMG_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTexture2DMultisampleIMG_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTexture2DMultisampleIMG_wrp(target,attachment,textarget,texture,level,samples);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTexture2DMultisampleIMG_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTexture2DMultisampleIMG_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTexture2DMultisampleIMG_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTexture2DMultisampleIMG_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTexture2DMultisampleIMG_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferTexture2DMultisampleIMG %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture2DMultisampleIMG_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture2DMultisampleIMG_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture2DMultisampleIMG_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture2DMultisampleIMG_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTexture2DMultisampleIMG_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTexture2DMultisampleIMG_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTexture2DMultisampleIMG_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTexture2DMultisampleIMG_Idx) = get_ts();
        }


	

}