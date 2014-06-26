#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteProgramsNV_wrp						\
    ((void  (*)(GLsizei n,const GLuint *programs                                        \
    ))GL_ENTRY_PTR(glDeleteProgramsNV_Idx))


GLAPI void  APIENTRY glDeleteProgramsNV(GLsizei n,const GLuint *programs)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteProgramsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteProgramsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteProgramsNV_wrp(n,programs);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteProgramsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteProgramsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteProgramsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteProgramsNV_Idx),
				 GL_ENTRY_LAST_TS(glDeleteProgramsNV_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteProgramsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteProgramsNV_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgramsNV_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgramsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteProgramsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteProgramsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteProgramsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteProgramsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteProgramsNV_Idx) = get_ts();
        }


	

}