#include <glTraceCommon.h>
#include <generated.h>

#define glExtGetProgramsQCOM_wrp						\
    ((void  (*)(GLuint *programs,GLint maxPrograms,GLint *numPrograms                                        \
    ))GL_ENTRY_PTR(glExtGetProgramsQCOM_Idx))


GLAPI void  APIENTRY glExtGetProgramsQCOM(GLuint *programs,GLint maxPrograms,GLint *numPrograms)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glExtGetProgramsQCOM_Idx))
    	{
            GL_ENTRY_PREV_TS(glExtGetProgramsQCOM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glExtGetProgramsQCOM_wrp(programs,maxPrograms,numPrograms);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glExtGetProgramsQCOM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glExtGetProgramsQCOM_Idx) ++;

        GL_ENTRY_LAST_TS(glExtGetProgramsQCOM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glExtGetProgramsQCOM_Idx),
				 GL_ENTRY_LAST_TS(glExtGetProgramsQCOM_Idx));


        if(last_diff > 1000000000){
            printf("glExtGetProgramsQCOM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glExtGetProgramsQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetProgramsQCOM_Idx),
	             GL_ENTRY_CALL_TIME(glExtGetProgramsQCOM_Idx) /
	             GL_ENTRY_CALL_COUNT(glExtGetProgramsQCOM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glExtGetProgramsQCOM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glExtGetProgramsQCOM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glExtGetProgramsQCOM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glExtGetProgramsQCOM_Idx) = get_ts();
        }


	

}