#include <glTraceCommon.h>
#include <generated.h>

#define glInvalidateSubFramebuffer_wrp						\
    ((void  (*)(GLenum target,GLsizei numAttachments,const GLenum *attachments,GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glInvalidateSubFramebuffer_Idx))


GLAPI void  APIENTRY glInvalidateSubFramebuffer(GLenum target,GLsizei numAttachments,const GLenum *attachments,GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glInvalidateSubFramebuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glInvalidateSubFramebuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInvalidateSubFramebuffer_wrp(target,numAttachments,attachments,x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInvalidateSubFramebuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInvalidateSubFramebuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glInvalidateSubFramebuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInvalidateSubFramebuffer_Idx),
				 GL_ENTRY_LAST_TS(glInvalidateSubFramebuffer_Idx));


        if(last_diff > 1000000000){
            printf("glInvalidateSubFramebuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInvalidateSubFramebuffer_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateSubFramebuffer_Idx),
	             GL_ENTRY_CALL_TIME(glInvalidateSubFramebuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glInvalidateSubFramebuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInvalidateSubFramebuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInvalidateSubFramebuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInvalidateSubFramebuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInvalidateSubFramebuffer_Idx) = get_ts();
        }


	

}