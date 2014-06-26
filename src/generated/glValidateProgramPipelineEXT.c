#include <glTraceCommon.h>
#include <generated.h>

#define glValidateProgramPipelineEXT_wrp						\
    ((void  (*)(GLuint pipeline                                        \
    ))GL_ENTRY_PTR(glValidateProgramPipelineEXT_Idx))


GLAPI void  APIENTRY glValidateProgramPipelineEXT(GLuint pipeline)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glValidateProgramPipelineEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glValidateProgramPipelineEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glValidateProgramPipelineEXT_wrp(pipeline);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glValidateProgramPipelineEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glValidateProgramPipelineEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glValidateProgramPipelineEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glValidateProgramPipelineEXT_Idx),
				 GL_ENTRY_LAST_TS(glValidateProgramPipelineEXT_Idx));


        if(last_diff > 1000000000){
            printf("glValidateProgramPipelineEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glValidateProgramPipelineEXT_Idx),
	             GL_ENTRY_CALL_TIME(glValidateProgramPipelineEXT_Idx),
	             GL_ENTRY_CALL_TIME(glValidateProgramPipelineEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glValidateProgramPipelineEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glValidateProgramPipelineEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glValidateProgramPipelineEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glValidateProgramPipelineEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glValidateProgramPipelineEXT_Idx) = get_ts();
        }


	

}