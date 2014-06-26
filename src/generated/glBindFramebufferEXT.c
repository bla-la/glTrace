#include <glTraceCommon.h>
#include <generated.h>

#define glBindFramebufferEXT_wrp						\
    ((void  (*)(GLenum target,GLuint framebuffer                                        \
    ))GL_ENTRY_PTR(glBindFramebufferEXT_Idx))


GLAPI void  APIENTRY glBindFramebufferEXT(GLenum target,GLuint framebuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindFramebufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindFramebufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindFramebufferEXT_wrp(target,framebuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindFramebufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindFramebufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindFramebufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindFramebufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindFramebufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glBindFramebufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindFramebufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindFramebufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindFramebufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindFramebufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindFramebufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindFramebufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindFramebufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindFramebufferEXT_Idx) = get_ts();
        }


	

}