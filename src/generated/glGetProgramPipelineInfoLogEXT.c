#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramPipelineInfoLogEXT_wrp						\
    ((void  (*)(GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog                                        \
    ))GL_ENTRY_PTR(glGetProgramPipelineInfoLogEXT_Idx))


GLAPI void  APIENTRY glGetProgramPipelineInfoLogEXT(GLuint pipeline,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramPipelineInfoLogEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramPipelineInfoLogEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramPipelineInfoLogEXT_wrp(pipeline,bufSize,length,infoLog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLogEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramPipelineInfoLogEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramPipelineInfoLogEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramPipelineInfoLogEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramPipelineInfoLogEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramPipelineInfoLogEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramPipelineInfoLogEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLogEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLogEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramPipelineInfoLogEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLogEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramPipelineInfoLogEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramPipelineInfoLogEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramPipelineInfoLogEXT_Idx) = get_ts();
        }


	

}