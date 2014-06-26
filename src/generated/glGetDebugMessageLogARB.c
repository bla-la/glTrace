#include <glTraceCommon.h>
#include <generated.h>

#define glGetDebugMessageLogARB_wrp						\
    ((GLuint  (*)(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog                                        \
    ))GL_ENTRY_PTR(glGetDebugMessageLogARB_Idx))


GLAPI GLuint  APIENTRY glGetDebugMessageLogARB(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetDebugMessageLogARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDebugMessageLogARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGetDebugMessageLogARB_wrp(count,bufSize,sources,types,ids,severities,lengths,messageLog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDebugMessageLogARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDebugMessageLogARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDebugMessageLogARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDebugMessageLogARB_Idx),
				 GL_ENTRY_LAST_TS(glGetDebugMessageLogARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetDebugMessageLogARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetDebugMessageLogARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetDebugMessageLogARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDebugMessageLogARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDebugMessageLogARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDebugMessageLogARB_Idx) = get_ts();
        }


	return retval;

}