#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2i_wrp						\
    ((void  (*)(GLuint program,GLint location,GLint v0,GLint v1                                        \
    ))GL_ENTRY_PTR(glProgramUniform2i_Idx))


GLAPI void  APIENTRY glProgramUniform2i(GLuint program,GLint location,GLint v0,GLint v1)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform2i_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2i_wrp(program,location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2i_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2i_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2i_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform2i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2i_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2i_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2i_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2i_Idx) = get_ts();
        }


	

}