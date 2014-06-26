#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2d_wrp						\
    ((void  (*)(GLuint program,GLint location,GLdouble v0,GLdouble v1                                        \
    ))GL_ENTRY_PTR(glProgramUniform2d_Idx))


GLAPI void  APIENTRY glProgramUniform2d(GLuint program,GLint location,GLdouble v0,GLdouble v1)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform2d_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2d_wrp(program,location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2d_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2d_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2d_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform2d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2d_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2d_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2d_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2d_Idx) = get_ts();
        }


	

}