#include <glTraceCommon.h>
#include <generated.h>

#define glBlitFramebuffer_wrp						\
    ((void  (*)(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter                                        \
    ))GL_ENTRY_PTR(glBlitFramebuffer_Idx))


GLAPI void  APIENTRY glBlitFramebuffer(GLint srcX0,GLint srcY0,GLint srcX1,GLint srcY1,GLint dstX0,GLint dstY0,GLint dstX1,GLint dstY1,GLbitfield mask,GLenum filter)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBlitFramebuffer_Idx))
	{
            GL_ENTRY_PTR(glBlitFramebuffer_Idx) = dlsym(RTLD_NEXT,"glBlitFramebuffer");
            if(!GL_ENTRY_PTR(glBlitFramebuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBlitFramebuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glBlitFramebuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBlitFramebuffer_wrp(srcX0,srcY0,srcX1,srcY1,dstX0,dstY0,dstX1,dstY1,mask,filter);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBlitFramebuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBlitFramebuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glBlitFramebuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBlitFramebuffer_Idx),
				 GL_ENTRY_LAST_TS(glBlitFramebuffer_Idx));
        if(last_diff > 1000000000){
            printf("glBlitFramebuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBlitFramebuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBlitFramebuffer_Idx),
	             GL_ENTRY_CALL_TIME(glBlitFramebuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glBlitFramebuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBlitFramebuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBlitFramebuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBlitFramebuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBlitFramebuffer_Idx) = get_ts();
        }


	

}