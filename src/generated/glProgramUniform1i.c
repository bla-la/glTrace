#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform1i_wrp						\
    ((void  (*)(GLuint program,GLint location,GLint v0                                        \
    ))GL_ENTRY_PTR(glProgramUniform1i_Idx))


GLAPI void  APIENTRY glProgramUniform1i(GLuint program,GLint location,GLint v0)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform1i_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform1i_Idx) = dlsym(RTLD_NEXT,"glProgramUniform1i");
            if(!GL_ENTRY_PTR(glProgramUniform1i_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform1i_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform1i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform1i_wrp(program,location,v0);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform1i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform1i_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform1i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform1i_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform1i_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform1i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform1i_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1i_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1i_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform1i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform1i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform1i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform1i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform1i_Idx) = get_ts();
        }


	

}