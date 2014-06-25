#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform1f_wrp						\
    ((void  (*)(GLuint program,GLint location,GLfloat v0                                        \
    ))GL_ENTRY_PTR(glProgramUniform1f_Idx))


GLAPI void  APIENTRY glProgramUniform1f(GLuint program,GLint location,GLfloat v0)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform1f_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform1f_Idx) = dlsym(RTLD_NEXT,"glProgramUniform1f");
            if(!GL_ENTRY_PTR(glProgramUniform1f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform1f_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform1f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform1f_wrp(program,location,v0);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform1f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform1f_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform1f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform1f_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform1f_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform1f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform1f_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1f_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1f_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform1f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform1f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform1f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform1f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform1f_Idx) = get_ts();
        }


	

}