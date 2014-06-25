#include <glTraceCommon.h>
#include <generated.h>

#define glGetDebugMessageLog_wrp						\
    ((GLuint  (*)(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog                                        \
    ))GL_ENTRY_PTR(glGetDebugMessageLog_Idx))


GLAPI GLuint  APIENTRY glGetDebugMessageLog(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetDebugMessageLog_Idx))
	{
            GL_ENTRY_PTR(glGetDebugMessageLog_Idx) = dlsym(RTLD_NEXT,"glGetDebugMessageLog");
            if(!GL_ENTRY_PTR(glGetDebugMessageLog_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetDebugMessageLog_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDebugMessageLog_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGetDebugMessageLog_wrp(count,bufSize,sources,types,ids,severities,lengths,messageLog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDebugMessageLog_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDebugMessageLog_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDebugMessageLog_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDebugMessageLog_Idx),
				 GL_ENTRY_LAST_TS(glGetDebugMessageLog_Idx));
        if(last_diff > 1000000000){
            printf("glGetDebugMessageLog %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDebugMessageLog_Idx),
	             GL_ENTRY_CALL_TIME(glGetDebugMessageLog_Idx),
	             GL_ENTRY_CALL_TIME(glGetDebugMessageLog_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDebugMessageLog_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDebugMessageLog_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDebugMessageLog_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDebugMessageLog_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDebugMessageLog_Idx) = get_ts();
        }


	return retval;

}