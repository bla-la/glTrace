#include <glTraceCommon.h>
#include <generated.h>

#define glRequestResidentProgramsNV_wrp						\
    ((void  (*)(GLsizei n,const GLuint *programs                                        \
    ))GL_ENTRY_PTR(glRequestResidentProgramsNV_Idx))


GLAPI void  APIENTRY glRequestResidentProgramsNV(GLsizei n,const GLuint *programs)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glRequestResidentProgramsNV_Idx))
	{
            GL_ENTRY_PTR(glRequestResidentProgramsNV_Idx) = dlsym(RTLD_NEXT,"glRequestResidentProgramsNV");
            if(!GL_ENTRY_PTR(glRequestResidentProgramsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glRequestResidentProgramsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glRequestResidentProgramsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRequestResidentProgramsNV_wrp(n,programs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRequestResidentProgramsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRequestResidentProgramsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glRequestResidentProgramsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRequestResidentProgramsNV_Idx),
				 GL_ENTRY_LAST_TS(glRequestResidentProgramsNV_Idx));
        if(last_diff > 1000000000){
            printf("glRequestResidentProgramsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRequestResidentProgramsNV_Idx),
	             GL_ENTRY_CALL_TIME(glRequestResidentProgramsNV_Idx),
	             GL_ENTRY_CALL_TIME(glRequestResidentProgramsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glRequestResidentProgramsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRequestResidentProgramsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRequestResidentProgramsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRequestResidentProgramsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRequestResidentProgramsNV_Idx) = get_ts();
        }


	

}