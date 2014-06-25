#include <glTraceCommon.h>
#include <generated.h>

#define glGenProgramPipelines_wrp						\
    ((void  (*)(GLsizei n,GLuint *pipelines                                        \
    ))GL_ENTRY_PTR(glGenProgramPipelines_Idx))


GLAPI void  APIENTRY glGenProgramPipelines(GLsizei n,GLuint *pipelines)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenProgramPipelines_Idx))
	{
            GL_ENTRY_PTR(glGenProgramPipelines_Idx) = dlsym(RTLD_NEXT,"glGenProgramPipelines");
            if(!GL_ENTRY_PTR(glGenProgramPipelines_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenProgramPipelines_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenProgramPipelines_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenProgramPipelines_wrp(n,pipelines);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenProgramPipelines_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenProgramPipelines_Idx) ++;

        GL_ENTRY_LAST_TS(glGenProgramPipelines_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenProgramPipelines_Idx),
				 GL_ENTRY_LAST_TS(glGenProgramPipelines_Idx));
        if(last_diff > 1000000000){
            printf("glGenProgramPipelines %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenProgramPipelines_Idx),
	             GL_ENTRY_CALL_TIME(glGenProgramPipelines_Idx),
	             GL_ENTRY_CALL_TIME(glGenProgramPipelines_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenProgramPipelines_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenProgramPipelines_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenProgramPipelines_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenProgramPipelines_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenProgramPipelines_Idx) = get_ts();
        }


	

}