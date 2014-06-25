#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform3f_wrp						\
    ((void  (*)(GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2                                        \
    ))GL_ENTRY_PTR(glProgramUniform3f_Idx))


GLAPI void  APIENTRY glProgramUniform3f(GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform3f_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform3f_Idx) = dlsym(RTLD_NEXT,"glProgramUniform3f");
            if(!GL_ENTRY_PTR(glProgramUniform3f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform3f_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform3f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform3f_wrp(program,location,v0,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform3f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform3f_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform3f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform3f_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform3f_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform3f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform3f_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3f_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3f_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform3f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform3f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform3f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform3f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform3f_Idx) = get_ts();
        }


	

}