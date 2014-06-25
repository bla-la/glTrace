#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform3d_wrp						\
    ((void  (*)(GLuint program,GLint location,GLdouble v0,GLdouble v1,GLdouble v2                                        \
    ))GL_ENTRY_PTR(glProgramUniform3d_Idx))


GLAPI void  APIENTRY glProgramUniform3d(GLuint program,GLint location,GLdouble v0,GLdouble v1,GLdouble v2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform3d_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform3d_Idx) = dlsym(RTLD_NEXT,"glProgramUniform3d");
            if(!GL_ENTRY_PTR(glProgramUniform3d_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform3d_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform3d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform3d_wrp(program,location,v0,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform3d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform3d_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform3d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform3d_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform3d_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform3d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform3d_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3d_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3d_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform3d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform3d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform3d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform3d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform3d_Idx) = get_ts();
        }


	

}