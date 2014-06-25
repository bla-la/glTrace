#include <glTraceCommon.h>
#include <generated.h>

#define glGetDebugMessageLogAMD_wrp						\
    ((GLuint  (*)(GLuint count,GLsizei bufsize,GLenum *categories,GLuint *severities,GLuint *ids,GLsizei *lengths,GLchar *message                                        \
    ))GL_ENTRY_PTR(glGetDebugMessageLogAMD_Idx))


GLAPI GLuint  APIENTRY glGetDebugMessageLogAMD(GLuint count,GLsizei bufsize,GLenum *categories,GLuint *severities,GLuint *ids,GLsizei *lengths,GLchar *message)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetDebugMessageLogAMD_Idx))
	{
            GL_ENTRY_PTR(glGetDebugMessageLogAMD_Idx) = dlsym(RTLD_NEXT,"glGetDebugMessageLogAMD");
            if(!GL_ENTRY_PTR(glGetDebugMessageLogAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetDebugMessageLogAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDebugMessageLogAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGetDebugMessageLogAMD_wrp(count,bufsize,categories,severities,ids,lengths,message);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDebugMessageLogAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDebugMessageLogAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDebugMessageLogAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDebugMessageLogAMD_Idx),
				 GL_ENTRY_LAST_TS(glGetDebugMessageLogAMD_Idx));
        if(last_diff > 1000000000){
            printf("glGetDebugMessageLogAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetDebugMessageLogAMD_Idx),
	             GL_ENTRY_CALL_TIME(glGetDebugMessageLogAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDebugMessageLogAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDebugMessageLogAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDebugMessageLogAMD_Idx) = get_ts();
        }


	return retval;

}