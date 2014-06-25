#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniformMatrix2x4dv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value                                        \
    ))GL_ENTRY_PTR(glProgramUniformMatrix2x4dv_Idx))


GLAPI void  APIENTRY glProgramUniformMatrix2x4dv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniformMatrix2x4dv_Idx))
	{
            GL_ENTRY_PTR(glProgramUniformMatrix2x4dv_Idx) = dlsym(RTLD_NEXT,"glProgramUniformMatrix2x4dv");
            if(!GL_ENTRY_PTR(glProgramUniformMatrix2x4dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniformMatrix2x4dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniformMatrix2x4dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniformMatrix2x4dv_wrp(program,location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniformMatrix2x4dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniformMatrix2x4dv_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniformMatrix2x4dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniformMatrix2x4dv_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniformMatrix2x4dv_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniformMatrix2x4dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix2x4dv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformMatrix2x4dv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformMatrix2x4dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix2x4dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniformMatrix2x4dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix2x4dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniformMatrix2x4dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniformMatrix2x4dv_Idx) = get_ts();
        }


	

}