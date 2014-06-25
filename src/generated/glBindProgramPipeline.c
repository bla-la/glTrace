#include <glTraceCommon.h>
#include <generated.h>

#define glBindProgramPipeline_wrp						\
    ((void  (*)(GLuint pipeline                                        \
    ))GL_ENTRY_PTR(glBindProgramPipeline_Idx))


GLAPI void  APIENTRY glBindProgramPipeline(GLuint pipeline)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindProgramPipeline_Idx))
	{
            GL_ENTRY_PTR(glBindProgramPipeline_Idx) = dlsym(RTLD_NEXT,"glBindProgramPipeline");
            if(!GL_ENTRY_PTR(glBindProgramPipeline_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindProgramPipeline_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindProgramPipeline_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindProgramPipeline_wrp(pipeline);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindProgramPipeline_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindProgramPipeline_Idx) ++;

        GL_ENTRY_LAST_TS(glBindProgramPipeline_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindProgramPipeline_Idx),
				 GL_ENTRY_LAST_TS(glBindProgramPipeline_Idx));
        if(last_diff > 1000000000){
            printf("glBindProgramPipeline %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindProgramPipeline_Idx),
	             GL_ENTRY_CALL_TIME(glBindProgramPipeline_Idx),
	             GL_ENTRY_CALL_TIME(glBindProgramPipeline_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindProgramPipeline_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindProgramPipeline_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindProgramPipeline_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindProgramPipeline_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindProgramPipeline_Idx) = get_ts();
        }


	

}