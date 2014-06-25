#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramStageiv_wrp						\
    ((void  (*)(GLuint program,GLenum shadertype,GLenum pname,GLint *values                                        \
    ))GL_ENTRY_PTR(glGetProgramStageiv_Idx))


GLAPI void  APIENTRY glGetProgramStageiv(GLuint program,GLenum shadertype,GLenum pname,GLint *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramStageiv_Idx))
	{
            GL_ENTRY_PTR(glGetProgramStageiv_Idx) = dlsym(RTLD_NEXT,"glGetProgramStageiv");
            if(!GL_ENTRY_PTR(glGetProgramStageiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramStageiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramStageiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramStageiv_wrp(program,shadertype,pname,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramStageiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramStageiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramStageiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramStageiv_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramStageiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramStageiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramStageiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramStageiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramStageiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramStageiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramStageiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramStageiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramStageiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramStageiv_Idx) = get_ts();
        }


	

}