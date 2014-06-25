#include <glTraceCommon.h>
#include <generated.h>

#define glGenProgramsNV_wrp						\
    ((void  (*)(GLsizei n,GLuint *programs                                        \
    ))GL_ENTRY_PTR(glGenProgramsNV_Idx))


GLAPI void  APIENTRY glGenProgramsNV(GLsizei n,GLuint *programs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenProgramsNV_Idx))
	{
            GL_ENTRY_PTR(glGenProgramsNV_Idx) = dlsym(RTLD_NEXT,"glGenProgramsNV");
            if(!GL_ENTRY_PTR(glGenProgramsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenProgramsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenProgramsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenProgramsNV_wrp(n,programs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenProgramsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenProgramsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGenProgramsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenProgramsNV_Idx),
				 GL_ENTRY_LAST_TS(glGenProgramsNV_Idx));
        if(last_diff > 1000000000){
            printf("glGenProgramsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenProgramsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenProgramsNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenProgramsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenProgramsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenProgramsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenProgramsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenProgramsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenProgramsNV_Idx) = get_ts();
        }


	

}