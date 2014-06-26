#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramPipelineInfoLog_wrp						\
    ((void  (*)(GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog                                        \
    ))GL_ENTRY_PTR(glGetProgramPipelineInfoLog_Idx))


GLAPI void  APIENTRY glGetProgramPipelineInfoLog(GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramPipelineInfoLog_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramPipelineInfoLog_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramPipelineInfoLog_wrp(pipeline,bufSize,length,infoLog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLog_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramPipelineInfoLog_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramPipelineInfoLog_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramPipelineInfoLog_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramPipelineInfoLog_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramPipelineInfoLog %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramPipelineInfoLog_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLog_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLog_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramPipelineInfoLog_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLog_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramPipelineInfoLog_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLog_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramPipelineInfoLog_Idx) = get_ts();
        }


	

}