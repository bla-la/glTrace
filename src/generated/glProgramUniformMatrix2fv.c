#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniformMatrix2fv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glProgramUniformMatrix2fv_Idx))


GLAPI void  APIENTRY glProgramUniformMatrix2fv(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniformMatrix2fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniformMatrix2fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniformMatrix2fv_wrp(program,location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniformMatrix2fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniformMatrix2fv_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniformMatrix2fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniformMatrix2fv_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniformMatrix2fv_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniformMatrix2fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix2fv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformMatrix2fv_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformMatrix2fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix2fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniformMatrix2fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix2fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniformMatrix2fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniformMatrix2fv_Idx) = get_ts();
        }


	

}