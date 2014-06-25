#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferTexture2DOES_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level                                        \
    ))GL_ENTRY_PTR(glFramebufferTexture2DOES_Idx))


GLAPI void  APIENTRY glFramebufferTexture2DOES(GLenum target,GLenum attachment,GLenum textarget,GLuint texture,GLint level)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFramebufferTexture2DOES_Idx))
	{
            GL_ENTRY_PTR(glFramebufferTexture2DOES_Idx) = dlsym(RTLD_NEXT,"glFramebufferTexture2DOES");
            if(!GL_ENTRY_PTR(glFramebufferTexture2DOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFramebufferTexture2DOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferTexture2DOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferTexture2DOES_wrp(target,attachment,textarget,texture,level);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferTexture2DOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferTexture2DOES_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferTexture2DOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferTexture2DOES_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferTexture2DOES_Idx));
        if(last_diff > 1000000000){
            printf("glFramebufferTexture2DOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture2DOES_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture2DOES_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferTexture2DOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferTexture2DOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferTexture2DOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferTexture2DOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferTexture2DOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferTexture2DOES_Idx) = get_ts();
        }


	

}