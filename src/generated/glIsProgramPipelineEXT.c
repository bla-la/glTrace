#include <glTraceCommon.h>
#include <generated.h>

#define glIsProgramPipelineEXT_wrp						\
    ((GLboolean  (*)(GLuint pipeline                                        \
    ))GL_ENTRY_PTR(glIsProgramPipelineEXT_Idx))


GLAPI GLboolean  APIENTRY glIsProgramPipelineEXT(GLuint pipeline)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsProgramPipelineEXT_Idx))
	{
            GL_ENTRY_PTR(glIsProgramPipelineEXT_Idx) = dlsym(RTLD_NEXT,"glIsProgramPipelineEXT");
            if(!GL_ENTRY_PTR(glIsProgramPipelineEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsProgramPipelineEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsProgramPipelineEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsProgramPipelineEXT_wrp(pipeline);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsProgramPipelineEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsProgramPipelineEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIsProgramPipelineEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsProgramPipelineEXT_Idx),
				 GL_ENTRY_LAST_TS(glIsProgramPipelineEXT_Idx));
        if(last_diff > 1000000000){
            printf("glIsProgramPipelineEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsProgramPipelineEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgramPipelineEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgramPipelineEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsProgramPipelineEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsProgramPipelineEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsProgramPipelineEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsProgramPipelineEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsProgramPipelineEXT_Idx) = get_ts();
        }


	return retval;

}