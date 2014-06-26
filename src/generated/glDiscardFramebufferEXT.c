#include <glTraceCommon.h>
#include <generated.h>

#define glDiscardFramebufferEXT_wrp						\
    ((void  (*)(GLenum target,GLsizei numAttachments,const GLenum *attachments                                        \
    ))GL_ENTRY_PTR(glDiscardFramebufferEXT_Idx))


GLAPI void  APIENTRY glDiscardFramebufferEXT(GLenum target,GLsizei numAttachments,const GLenum *attachments)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDiscardFramebufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDiscardFramebufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDiscardFramebufferEXT_wrp(target,numAttachments,attachments);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDiscardFramebufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDiscardFramebufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDiscardFramebufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDiscardFramebufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glDiscardFramebufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glDiscardFramebufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDiscardFramebufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDiscardFramebufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDiscardFramebufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDiscardFramebufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDiscardFramebufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDiscardFramebufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDiscardFramebufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDiscardFramebufferEXT_Idx) = get_ts();
        }


	

}