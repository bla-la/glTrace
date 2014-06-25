#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform4dv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLdouble *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform4dv_Idx))


GLAPI void  APIENTRY glProgramUniform4dv(GLuint program,GLint location,GLsizei count,const GLdouble *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform4dv_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform4dv_Idx) = dlsym(RTLD_NEXT,"glProgramUniform4dv");
            if(!GL_ENTRY_PTR(glProgramUniform4dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform4dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform4dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform4dv_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform4dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform4dv_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform4dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform4dv_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform4dv_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform4dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform4dv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4dv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform4dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform4dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform4dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform4dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform4dv_Idx) = get_ts();
        }


	

}