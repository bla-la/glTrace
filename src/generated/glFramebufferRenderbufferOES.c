#include <glTraceCommon.h>
#include <generated.h>

#define glFramebufferRenderbufferOES_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer                                        \
    ))GL_ENTRY_PTR(glFramebufferRenderbufferOES_Idx))


GLAPI void  APIENTRY glFramebufferRenderbufferOES(GLenum target,GLenum attachment,GLenum renderbuffertarget,GLuint renderbuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFramebufferRenderbufferOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glFramebufferRenderbufferOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFramebufferRenderbufferOES_wrp(target,attachment,renderbuffertarget,renderbuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFramebufferRenderbufferOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFramebufferRenderbufferOES_Idx) ++;

        GL_ENTRY_LAST_TS(glFramebufferRenderbufferOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFramebufferRenderbufferOES_Idx),
				 GL_ENTRY_LAST_TS(glFramebufferRenderbufferOES_Idx));


        if(last_diff > 1000000000){
            printf("glFramebufferRenderbufferOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFramebufferRenderbufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferRenderbufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glFramebufferRenderbufferOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glFramebufferRenderbufferOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFramebufferRenderbufferOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFramebufferRenderbufferOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFramebufferRenderbufferOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFramebufferRenderbufferOES_Idx) = get_ts();
        }


	

}