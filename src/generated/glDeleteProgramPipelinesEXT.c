#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteProgramPipelinesEXT_wrp						\
    ((void  (*)(GLsizei n,const GLuint *pipelines                                        \
    ))GL_ENTRY_PTR(glDeleteProgramPipelinesEXT_Idx))


GLAPI void  APIENTRY glDeleteProgramPipelinesEXT(GLsizei n,const GLuint *pipelines)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteProgramPipelinesEXT_Idx))
	{
            GL_ENTRY_PTR(glDeleteProgramPipelinesEXT_Idx) = dlsym(RTLD_NEXT,"glDeleteProgramPipelinesEXT");
            if(!GL_ENTRY_PTR(glDeleteProgramPipelinesEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteProgramPipelinesEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteProgramPipelinesEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteProgramPipelinesEXT_wrp(n,pipelines);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteProgramPipelinesEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteProgramPipelinesEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteProgramPipelinesEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteProgramPipelinesEXT_Idx),
				 GL_ENTRY_LAST_TS(glDeleteProgramPipelinesEXT_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteProgramPipelinesEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteProgramPipelinesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgramPipelinesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgramPipelinesEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteProgramPipelinesEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteProgramPipelinesEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteProgramPipelinesEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteProgramPipelinesEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteProgramPipelinesEXT_Idx) = get_ts();
        }


	

}