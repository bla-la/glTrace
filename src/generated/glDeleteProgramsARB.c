#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteProgramsARB_wrp						\
    ((void  (*)(GLsizei n,const GLuint *programs                                        \
    ))GL_ENTRY_PTR(glDeleteProgramsARB_Idx))


GLAPI void  APIENTRY glDeleteProgramsARB(GLsizei n,const GLuint *programs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteProgramsARB_Idx))
	{
            GL_ENTRY_PTR(glDeleteProgramsARB_Idx) = dlsym(RTLD_NEXT,"glDeleteProgramsARB");
            if(!GL_ENTRY_PTR(glDeleteProgramsARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteProgramsARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteProgramsARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteProgramsARB_wrp(n,programs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteProgramsARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteProgramsARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteProgramsARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteProgramsARB_Idx),
				 GL_ENTRY_LAST_TS(glDeleteProgramsARB_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteProgramsARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteProgramsARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgramsARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgramsARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteProgramsARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteProgramsARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteProgramsARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteProgramsARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteProgramsARB_Idx) = get_ts();
        }


	

}