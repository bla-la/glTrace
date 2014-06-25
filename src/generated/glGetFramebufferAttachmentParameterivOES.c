#include <glTraceCommon.h>
#include <generated.h>

#define glGetFramebufferAttachmentParameterivOES_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetFramebufferAttachmentParameterivOES_Idx))


GLAPI void  APIENTRY glGetFramebufferAttachmentParameterivOES(GLenum target,GLenum attachment,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFramebufferAttachmentParameterivOES_Idx))
	{
            GL_ENTRY_PTR(glGetFramebufferAttachmentParameterivOES_Idx) = dlsym(RTLD_NEXT,"glGetFramebufferAttachmentParameterivOES");
            if(!GL_ENTRY_PTR(glGetFramebufferAttachmentParameterivOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameterivOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameterivOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFramebufferAttachmentParameterivOES_wrp(target,attachment,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameterivOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFramebufferAttachmentParameterivOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameterivOES_Idx),
				 GL_ENTRY_LAST_TS(glGetFramebufferAttachmentParameterivOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetFramebufferAttachmentParameterivOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameterivOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameterivOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameterivOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameterivOES_Idx) = get_ts();
        }


	

}