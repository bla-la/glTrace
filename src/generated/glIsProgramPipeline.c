#include <glTraceCommon.h>
#include <generated.h>

#define glIsProgramPipeline_wrp						\
    ((GLboolean  (*)(GLuint pipeline                                        \
    ))GL_ENTRY_PTR(glIsProgramPipeline_Idx))


GLAPI GLboolean  APIENTRY glIsProgramPipeline(GLuint pipeline)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsProgramPipeline_Idx))
	{
            GL_ENTRY_PTR(glIsProgramPipeline_Idx) = dlsym(RTLD_NEXT,"glIsProgramPipeline");
            if(!GL_ENTRY_PTR(glIsProgramPipeline_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsProgramPipeline_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsProgramPipeline_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsProgramPipeline_wrp(pipeline);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsProgramPipeline_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsProgramPipeline_Idx) ++;

        GL_ENTRY_LAST_TS(glIsProgramPipeline_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsProgramPipeline_Idx),
				 GL_ENTRY_LAST_TS(glIsProgramPipeline_Idx));
        if(last_diff > 1000000000){
            printf("glIsProgramPipeline %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsProgramPipeline_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgramPipeline_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgramPipeline_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsProgramPipeline_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsProgramPipeline_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsProgramPipeline_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsProgramPipeline_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsProgramPipeline_Idx) = get_ts();
        }


	return retval;

}