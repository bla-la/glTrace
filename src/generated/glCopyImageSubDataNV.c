#include <glTraceCommon.h>
#include <generated.h>

#define glCopyImageSubDataNV_wrp						\
    ((void  (*)(GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei width,GLsizei height,GLsizei depth                                        \
    ))GL_ENTRY_PTR(glCopyImageSubDataNV_Idx))


GLAPI void  APIENTRY glCopyImageSubDataNV(GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei width,GLsizei height,GLsizei depth)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyImageSubDataNV_Idx))
	{
            GL_ENTRY_PTR(glCopyImageSubDataNV_Idx) = dlsym(RTLD_NEXT,"glCopyImageSubDataNV");
            if(!GL_ENTRY_PTR(glCopyImageSubDataNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyImageSubDataNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyImageSubDataNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyImageSubDataNV_wrp(srcName,srcTarget,srcLevel,srcX,srcY,srcZ,dstName,dstTarget,dstLevel,dstX,dstY,dstZ,width,height,depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyImageSubDataNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyImageSubDataNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyImageSubDataNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyImageSubDataNV_Idx),
				 GL_ENTRY_LAST_TS(glCopyImageSubDataNV_Idx));
        if(last_diff > 1000000000){
            printf("glCopyImageSubDataNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyImageSubDataNV_Idx),
	             GL_ENTRY_CALL_TIME(glCopyImageSubDataNV_Idx),
	             GL_ENTRY_CALL_TIME(glCopyImageSubDataNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyImageSubDataNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyImageSubDataNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyImageSubDataNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyImageSubDataNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyImageSubDataNV_Idx) = get_ts();
        }


	

}