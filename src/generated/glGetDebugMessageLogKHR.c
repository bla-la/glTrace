#include <glTraceCommon.h>
#include <generated.h>

#define glGetDebugMessageLogKHR_wrp						\
    ((GLuint  (*)(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog                                        \
    ))GL_ENTRY_PTR(glGetDebugMessageLogKHR_Idx))


GLAPI GLuint  APIENTRY glGetDebugMessageLogKHR(GLuint count,GLsizei bufSize,GLenum *sources,GLenum *types,GLuint *ids,GLenum *severities,GLsizei *lengths,GLchar *messageLog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetDebugMessageLogKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetDebugMessageLogKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGetDebugMessageLogKHR_wrp(count,bufSize,sources,types,ids,severities,lengths,messageLog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetDebugMessageLogKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetDebugMessageLogKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glGetDebugMessageLogKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetDebugMessageLogKHR_Idx),
				 GL_ENTRY_LAST_TS(glGetDebugMessageLogKHR_Idx));


        if(last_diff > 1000000000){
            printf("glGetDebugMessageLogKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogKHR_Idx),
	             GL_ENTRY_CALL_TIME(glGetDebugMessageLogKHR_Idx),
	             GL_ENTRY_CALL_TIME(glGetDebugMessageLogKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetDebugMessageLogKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetDebugMessageLogKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetDebugMessageLogKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetDebugMessageLogKHR_Idx) = get_ts();
        }


	return retval;

}