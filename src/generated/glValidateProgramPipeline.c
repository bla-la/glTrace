#include <glTraceCommon.h>
#include <generated.h>

#define glValidateProgramPipeline_wrp						\
    ((void  (*)(GLuint pipeline                                        \
    ))GL_ENTRY_PTR(glValidateProgramPipeline_Idx))


GLAPI void  APIENTRY glValidateProgramPipeline(GLuint pipeline)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glValidateProgramPipeline_Idx))
	{
            GL_ENTRY_PTR(glValidateProgramPipeline_Idx) = dlsym(RTLD_NEXT,"glValidateProgramPipeline");
            if(!GL_ENTRY_PTR(glValidateProgramPipeline_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glValidateProgramPipeline_Idx))
    	{
            GL_ENTRY_PREV_TS(glValidateProgramPipeline_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glValidateProgramPipeline_wrp(pipeline);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glValidateProgramPipeline_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glValidateProgramPipeline_Idx) ++;

        GL_ENTRY_LAST_TS(glValidateProgramPipeline_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glValidateProgramPipeline_Idx),
				 GL_ENTRY_LAST_TS(glValidateProgramPipeline_Idx));
        if(last_diff > 1000000000){
            printf("glValidateProgramPipeline %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glValidateProgramPipeline_Idx),
	             GL_ENTRY_CALL_TIME(glValidateProgramPipeline_Idx),
	             GL_ENTRY_CALL_TIME(glValidateProgramPipeline_Idx) /
	             GL_ENTRY_CALL_COUNT(glValidateProgramPipeline_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glValidateProgramPipeline_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glValidateProgramPipeline_Idx) = 0;
             GL_ENTRY_CALL_TIME(glValidateProgramPipeline_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glValidateProgramPipeline_Idx) = get_ts();
        }


	

}