#include <glTraceCommon.h>
#include <generated.h>

#define glBindProgramPipelineEXT_wrp						\
    ((void  (*)(GLuint pipeline                                        \
    ))GL_ENTRY_PTR(glBindProgramPipelineEXT_Idx))


GLAPI void  APIENTRY glBindProgramPipelineEXT(GLuint pipeline)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindProgramPipelineEXT_Idx))
	{
            GL_ENTRY_PTR(glBindProgramPipelineEXT_Idx) = dlsym(RTLD_NEXT,"glBindProgramPipelineEXT");
            if(!GL_ENTRY_PTR(glBindProgramPipelineEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindProgramPipelineEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindProgramPipelineEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindProgramPipelineEXT_wrp(pipeline);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindProgramPipelineEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindProgramPipelineEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBindProgramPipelineEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindProgramPipelineEXT_Idx),
				 GL_ENTRY_LAST_TS(glBindProgramPipelineEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBindProgramPipelineEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindProgramPipelineEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindProgramPipelineEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBindProgramPipelineEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindProgramPipelineEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindProgramPipelineEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindProgramPipelineEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindProgramPipelineEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindProgramPipelineEXT_Idx) = get_ts();
        }


	

}