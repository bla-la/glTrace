#include <glTraceCommon.h>
#include <generated.h>

#define glUseProgramStages_wrp						\
    ((void  (*)(GLuint pipeline,GLbitfield stages,GLuint program                                        \
    ))GL_ENTRY_PTR(glUseProgramStages_Idx))


GLAPI void  APIENTRY glUseProgramStages(GLuint pipeline,GLbitfield stages,GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUseProgramStages_Idx))
	{
            GL_ENTRY_PTR(glUseProgramStages_Idx) = dlsym(RTLD_NEXT,"glUseProgramStages");
            if(!GL_ENTRY_PTR(glUseProgramStages_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUseProgramStages_Idx))
    	{
            GL_ENTRY_PREV_TS(glUseProgramStages_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUseProgramStages_wrp(pipeline,stages,program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUseProgramStages_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUseProgramStages_Idx) ++;

        GL_ENTRY_LAST_TS(glUseProgramStages_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUseProgramStages_Idx),
				 GL_ENTRY_LAST_TS(glUseProgramStages_Idx));
        if(last_diff > 1000000000){
            printf("glUseProgramStages %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUseProgramStages_Idx),
	             GL_ENTRY_CALL_TIME(glUseProgramStages_Idx),
	             GL_ENTRY_CALL_TIME(glUseProgramStages_Idx) /
	             GL_ENTRY_CALL_COUNT(glUseProgramStages_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUseProgramStages_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUseProgramStages_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUseProgramStages_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUseProgramStages_Idx) = get_ts();
        }


	

}