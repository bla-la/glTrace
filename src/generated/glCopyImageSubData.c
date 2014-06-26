#include <glTraceCommon.h>
#include <generated.h>

#define glCopyImageSubData_wrp						\
    ((void  (*)(GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei srcWidth,GLsizei srcHeight,GLsizei srcDepth                                        \
    ))GL_ENTRY_PTR(glCopyImageSubData_Idx))


GLAPI void  APIENTRY glCopyImageSubData(GLuint srcName,GLenum srcTarget,GLint srcLevel,GLint srcX,GLint srcY,GLint srcZ,GLuint dstName,GLenum dstTarget,GLint dstLevel,GLint dstX,GLint dstY,GLint dstZ,GLsizei srcWidth,GLsizei srcHeight,GLsizei srcDepth)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyImageSubData_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyImageSubData_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyImageSubData_wrp(srcName,srcTarget,srcLevel,srcX,srcY,srcZ,dstName,dstTarget,dstLevel,dstX,dstY,dstZ,srcWidth,srcHeight,srcDepth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyImageSubData_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyImageSubData_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyImageSubData_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyImageSubData_Idx),
				 GL_ENTRY_LAST_TS(glCopyImageSubData_Idx));


        if(last_diff > 1000000000){
            printf("glCopyImageSubData %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyImageSubData_Idx),
	             GL_ENTRY_CALL_TIME(glCopyImageSubData_Idx),
	             GL_ENTRY_CALL_TIME(glCopyImageSubData_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyImageSubData_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyImageSubData_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyImageSubData_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyImageSubData_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyImageSubData_Idx) = get_ts();
        }


	

}