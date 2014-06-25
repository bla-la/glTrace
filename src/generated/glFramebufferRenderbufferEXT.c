#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferRenderbufferEXT_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glFramebufferRenderbufferEXT_Idx))


GLAPI void  APIENTRY glFramebufferRenderbufferEXT(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glFramebufferRenderbufferEXT_Idx))
	{
            GL_ENTRY_PTR(glFramebufferRenderbufferEXT_Idx) = dlsym(RTLD_NEXT,"glFramebufferRenderbufferEXT");
            if(!GL_ENTRY_PTR(glFramebufferRenderbufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glFramebufferRenderbufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferRenderbufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferRenderbufferEXT_wrp(target,attachment,renderbuffertarget,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferRenderbufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferRenderbufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferRenderbufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferRenderbufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferRenderbufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glFramebufferRenderbufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferRenderbufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferRenderbufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferRenderbufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferRenderbufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferRenderbufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferRenderbufferEXT_Idx) = get_ts();
        }


	

}