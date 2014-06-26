#include <glTraceCommon.h>
#include <generated.h>

#define glNamedFramebufferRenderbufferEXT_wrp						\
    ((void  (*)(GLuint framebuffer,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glNamedFramebufferRenderbufferEXT_Idx))


GLAPI void  APIENTRY glNamedFramebufferRenderbufferEXT(GLuint framebuffer,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedFramebufferRenderbufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedFramebufferRenderbufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedFramebufferRenderbufferEXT_wrp(framebuffer,attachment,renderbuffertarget,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedFramebufferRenderbufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedFramebufferRenderbufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedFramebufferRenderbufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedFramebufferRenderbufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedFramebufferRenderbufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedFramebufferRenderbufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferRenderbufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedFramebufferRenderbufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedFramebufferRenderbufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedFramebufferRenderbufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedFramebufferRenderbufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedFramebufferRenderbufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedFramebufferRenderbufferEXT_Idx) = get_ts();
        }


	

}