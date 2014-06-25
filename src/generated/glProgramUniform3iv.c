#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform3iv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLint *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform3iv_Idx))


GLAPI void  APIENTRY glProgramUniform3iv(GLuint program,GLint location,GLsizei count,const GLint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform3iv_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform3iv_Idx) = dlsym(RTLD_NEXT,"glProgramUniform3iv");
            if(!GL_ENTRY_PTR(glProgramUniform3iv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform3iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform3iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform3iv_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform3iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform3iv_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform3iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform3iv_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform3iv_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform3iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform3iv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3iv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform3iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform3iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform3iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform3iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform3iv_Idx) = get_ts();
        }


	

}