#include <glTraceCommon.h>
#include <generated.h>

#define glGetFramebufferAttachmentParameterivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetFramebufferAttachmentParameterivEXT_Idx))


GLAPI void  APIENTRY glGetFramebufferAttachmentParameterivEXT(GLenum target,GLenum attachment,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFramebufferAttachmentParameterivEXT_wrp(target,attachment,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFramebufferAttachmentParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetFramebufferAttachmentParameterivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetFramebufferAttachmentParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameterivEXT_Idx) = get_ts();
        }


	

}