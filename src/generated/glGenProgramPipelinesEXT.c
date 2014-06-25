#include <glTraceCommon.h>
#include <generated.h>

#define glGenProgramPipelinesEXT_wrp						\
    ((void  (*)(GLsizei n,GLuint *pipelines                                        \
    ))GL_ENTRY_PTR(glGenProgramPipelinesEXT_Idx))


GLAPI void  APIENTRY glGenProgramPipelinesEXT(GLsizei n,GLuint *pipelines)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenProgramPipelinesEXT_Idx))
	{
            GL_ENTRY_PTR(glGenProgramPipelinesEXT_Idx) = dlsym(RTLD_NEXT,"glGenProgramPipelinesEXT");
            if(!GL_ENTRY_PTR(glGenProgramPipelinesEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenProgramPipelinesEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenProgramPipelinesEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenProgramPipelinesEXT_wrp(n,pipelines);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenProgramPipelinesEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenProgramPipelinesEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenProgramPipelinesEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenProgramPipelinesEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenProgramPipelinesEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGenProgramPipelinesEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenProgramPipelinesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenProgramPipelinesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenProgramPipelinesEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenProgramPipelinesEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenProgramPipelinesEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenProgramPipelinesEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenProgramPipelinesEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenProgramPipelinesEXT_Idx) = get_ts();
        }


	

}