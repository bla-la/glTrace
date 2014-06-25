#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTexture2D_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glFramebufferTexture2D_Idx))


GLAPI void  APIENTRY glFramebufferTexture2D(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFramebufferTexture2D_Idx))
	{
            GL_ENTRY_PTR(glFramebufferTexture2D_Idx) = dlsym(RTLD_NEXT,"glFramebufferTexture2D");
            if(!GL_ENTRY_PTR(glFramebufferTexture2D_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFramebufferTexture2D_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTexture2D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTexture2D_wrp(target,attachment,textarget,texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTexture2D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTexture2D_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTexture2D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTexture2D_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTexture2D_Idx));
        if(last_diff > 1000000000){
            printf("glFramebufferTexture2D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture2D_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture2D_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture2D_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture2D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTexture2D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTexture2D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTexture2D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTexture2D_Idx) = get_ts();
        }


	

}