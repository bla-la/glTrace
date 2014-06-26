#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform1i64NV_wrp						\
    ((void  (*)(GLuint program,GLint location,GLint64EXT x                                        \
    ))GL_ENTRY_PTR(glProgramUniform1i64NV_Idx))


GLAPI void  APIENTRY glProgramUniform1i64NV(GLuint program,GLint location,GLint64EXT x)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform1i64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform1i64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform1i64NV_wrp(program,location,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform1i64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform1i64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform1i64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform1i64NV_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform1i64NV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform1i64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform1i64NV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1i64NV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1i64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform1i64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform1i64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform1i64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform1i64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform1i64NV_Idx) = get_ts();
        }


	

}