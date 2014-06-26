#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteProgramPipelines_wrp						\
    ((void  (*)(GLsizei n,const GLuint *pipelines                                        \
    ))GL_ENTRY_PTR(glDeleteProgramPipelines_Idx))


GLAPI void  APIENTRY glDeleteProgramPipelines(GLsizei n,const GLuint *pipelines)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteProgramPipelines_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteProgramPipelines_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteProgramPipelines_wrp(n,pipelines);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteProgramPipelines_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteProgramPipelines_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteProgramPipelines_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteProgramPipelines_Idx),
				 GL_ENTRY_LAST_TS(glDeleteProgramPipelines_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteProgramPipelines %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteProgramPipelines_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgramPipelines_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgramPipelines_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteProgramPipelines_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteProgramPipelines_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteProgramPipelines_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteProgramPipelines_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteProgramPipelines_Idx) = get_ts();
        }


	

}