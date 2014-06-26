#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2f_wrp						\
    ((void  (*)(GLuint program,GLint location,GLfloat v0,GLfloat v1                                        \
    ))GL_ENTRY_PTR(glProgramUniform2f_Idx))


GLAPI void  APIENTRY glProgramUniform2f(GLuint program,GLint location,GLfloat v0,GLfloat v1)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform2f_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2f_wrp(program,location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2f_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2f_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2f_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform2f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2f_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2f_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2f_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2f_Idx) = get_ts();
        }


	

}