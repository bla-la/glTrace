#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramPipelineiv_wrp						\
    ((void  (*)(GLuint pipeline,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramPipelineiv_Idx))


GLAPI void  APIENTRY glGetProgramPipelineiv(GLuint pipeline,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramPipelineiv_Idx))
	{
            GL_ENTRY_PTR(glGetProgramPipelineiv_Idx) = dlsym(RTLD_NEXT,"glGetProgramPipelineiv");
            if(!GL_ENTRY_PTR(glGetProgramPipelineiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramPipelineiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramPipelineiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramPipelineiv_wrp(pipeline,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramPipelineiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramPipelineiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramPipelineiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramPipelineiv_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramPipelineiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramPipelineiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramPipelineiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramPipelineiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramPipelineiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramPipelineiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramPipelineiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramPipelineiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramPipelineiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramPipelineiv_Idx) = get_ts();
        }


	

}