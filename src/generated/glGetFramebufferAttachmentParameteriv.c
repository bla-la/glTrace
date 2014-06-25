#include <glTraceCommon.h>
#include <generated.h>

#define glGetFramebufferAttachmentParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum attachment,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetFramebufferAttachmentParameteriv_Idx))


GLAPI void  APIENTRY glGetFramebufferAttachmentParameteriv(GLenum target,GLenum attachment,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetFramebufferAttachmentParameteriv_Idx))
	{
            GL_ENTRY_PTR(glGetFramebufferAttachmentParameteriv_Idx) = dlsym(RTLD_NEXT,"glGetFramebufferAttachmentParameteriv");
            if(!GL_ENTRY_PTR(glGetFramebufferAttachmentParameteriv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFramebufferAttachmentParameteriv_wrp(target,attachment,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFramebufferAttachmentParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetFramebufferAttachmentParameteriv_Idx));
        if(last_diff > 1000000000){
            printf("glGetFramebufferAttachmentParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFramebufferAttachmentParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFramebufferAttachmentParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFramebufferAttachmentParameteriv_Idx) = get_ts();
        }


	

}