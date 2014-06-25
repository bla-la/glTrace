#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform1fv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform1fv_Idx))


GLAPI void  APIENTRY glProgramUniform1fv(GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform1fv_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform1fv_Idx) = dlsym(RTLD_NEXT,"glProgramUniform1fv");
            if(!GL_ENTRY_PTR(glProgramUniform1fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform1fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform1fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform1fv_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform1fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform1fv_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform1fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform1fv_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform1fv_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform1fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform1fv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1fv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform1fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform1fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform1fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform1fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform1fv_Idx) = get_ts();
        }


	

}