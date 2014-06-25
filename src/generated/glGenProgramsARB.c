#include <glTraceCommon.h>
#include <generated.h>

#define glGenProgramsARB_wrp						\
    ((void  (*)(GLsizei n,GLuint *programs                                        \
    ))GL_ENTRY_PTR(glGenProgramsARB_Idx))


GLAPI void  APIENTRY glGenProgramsARB(GLsizei n,GLuint *programs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenProgramsARB_Idx))
	{
            GL_ENTRY_PTR(glGenProgramsARB_Idx) = dlsym(RTLD_NEXT,"glGenProgramsARB");
            if(!GL_ENTRY_PTR(glGenProgramsARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenProgramsARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenProgramsARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenProgramsARB_wrp(n,programs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenProgramsARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenProgramsARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGenProgramsARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenProgramsARB_Idx),
				 GL_ENTRY_LAST_TS(glGenProgramsARB_Idx));
        if(last_diff > 1000000000){
            printf("glGenProgramsARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenProgramsARB_Idx),
	             GL_ENTRY_CALL_TIME(glGenProgramsARB_Idx),
	             GL_ENTRY_CALL_TIME(glGenProgramsARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenProgramsARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenProgramsARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenProgramsARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenProgramsARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenProgramsARB_Idx) = get_ts();
        }


	

}