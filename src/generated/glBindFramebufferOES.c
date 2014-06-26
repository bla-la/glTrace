#include <glTraceCommon.h>
#include <generated.h>

#define glBindFramebufferOES_wrp						\
    ((void  (*)(GLenum target,GLuint framebuffer                                        \
    ))GL_ENTRY_PTR(glBindFramebufferOES_Idx))


GLAPI void  APIENTRY glBindFramebufferOES(GLenum target,GLuint framebuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindFramebufferOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindFramebufferOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindFramebufferOES_wrp(target,framebuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindFramebufferOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindFramebufferOES_Idx) ++;

        GL_ENTRY_LAST_TS(glBindFramebufferOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindFramebufferOES_Idx),
				 GL_ENTRY_LAST_TS(glBindFramebufferOES_Idx));


        if(last_diff > 1000000000){
            printf("glBindFramebufferOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindFramebufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glBindFramebufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glBindFramebufferOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindFramebufferOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindFramebufferOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindFramebufferOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindFramebufferOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindFramebufferOES_Idx) = get_ts();
        }


	

}