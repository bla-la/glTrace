#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramPipelineivEXT_wrp						\
    ((void  (*)(GLuint pipeline,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramPipelineivEXT_Idx))


GLAPI void  APIENTRY glGetProgramPipelineivEXT(GLuint pipeline,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramPipelineivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramPipelineivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramPipelineivEXT_wrp(pipeline,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramPipelineivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramPipelineivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramPipelineivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramPipelineivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramPipelineivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramPipelineivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramPipelineivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramPipelineivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramPipelineivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramPipelineivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramPipelineivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramPipelineivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramPipelineivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramPipelineivEXT_Idx) = get_ts();
        }


	

}