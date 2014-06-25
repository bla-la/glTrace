#include <glTraceCommon.h>
#include <generated.h>

#define glUseProgramStagesEXT_wrp						\
    ((void  (*)(GLuint pipeline,GLbitfield stages,GLuint program                                        \
    ))GL_ENTRY_PTR(glUseProgramStagesEXT_Idx))


GLAPI void  APIENTRY glUseProgramStagesEXT(GLuint pipeline,GLbitfield stages,GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUseProgramStagesEXT_Idx))
	{
            GL_ENTRY_PTR(glUseProgramStagesEXT_Idx) = dlsym(RTLD_NEXT,"glUseProgramStagesEXT");
            if(!GL_ENTRY_PTR(glUseProgramStagesEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUseProgramStagesEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glUseProgramStagesEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUseProgramStagesEXT_wrp(pipeline,stages,program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUseProgramStagesEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUseProgramStagesEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glUseProgramStagesEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUseProgramStagesEXT_Idx),
				 GL_ENTRY_LAST_TS(glUseProgramStagesEXT_Idx));
        if(last_diff > 1000000000){
            printf("glUseProgramStagesEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUseProgramStagesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUseProgramStagesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUseProgramStagesEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glUseProgramStagesEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUseProgramStagesEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUseProgramStagesEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUseProgramStagesEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUseProgramStagesEXT_Idx) = get_ts();
        }


	

}