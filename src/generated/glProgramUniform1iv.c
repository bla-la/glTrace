#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform1iv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLint *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform1iv_Idx))


GLAPI void  APIENTRY glProgramUniform1iv(GLuint program,GLint location,GLsizei count,const GLint *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform1iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform1iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform1iv_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform1iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform1iv_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform1iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform1iv_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform1iv_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform1iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform1iv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1iv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform1iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform1iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform1iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform1iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform1iv_Idx) = get_ts();
        }


	

}