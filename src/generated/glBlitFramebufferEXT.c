#include <glTraceCommon.h>
#include <generated.h>

#define glBlitFramebufferEXT_wrp						\
    ((void  (*)(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter                                        \
    ))GL_ENTRY_PTR(glBlitFramebufferEXT_Idx))


GLAPI void  APIENTRY glBlitFramebufferEXT(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlitFramebufferEXT_Idx))
	{
            GL_ENTRY_PTR(glBlitFramebufferEXT_Idx) = dlsym(RTLD_NEXT,"glBlitFramebufferEXT");
            if(!GL_ENTRY_PTR(glBlitFramebufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlitFramebufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlitFramebufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlitFramebufferEXT_wrp(srcX0,srcY0,srcX1,srcY1,dstX0,dstY0,dstX1,dstY1,mask,filter);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlitFramebufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlitFramebufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBlitFramebufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlitFramebufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glBlitFramebufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBlitFramebufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlitFramebufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlitFramebufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBlitFramebufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlitFramebufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlitFramebufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlitFramebufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlitFramebufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlitFramebufferEXT_Idx) = get_ts();
        }


	

}