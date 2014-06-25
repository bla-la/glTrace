#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferRenderbuffer_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glFramebufferRenderbuffer_Idx))


GLAPI void  APIENTRY glFramebufferRenderbuffer(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFramebufferRenderbuffer_Idx))
	{
            GL_ENTRY_PTR(glFramebufferRenderbuffer_Idx) = dlsym(RTLD_NEXT,"glFramebufferRenderbuffer");
            if(!GL_ENTRY_PTR(glFramebufferRenderbuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFramebufferRenderbuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferRenderbuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferRenderbuffer_wrp(target,attachment,renderbuffertarget,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferRenderbuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferRenderbuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferRenderbuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferRenderbuffer_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferRenderbuffer_Idx));
        if(last_diff > 1000000000){
            printf("glFramebufferRenderbuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferRenderbuffer_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferRenderbuffer_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferRenderbuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferRenderbuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferRenderbuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferRenderbuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferRenderbuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferRenderbuffer_Idx) = get_ts();
        }


	

}