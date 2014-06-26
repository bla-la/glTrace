#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2fvEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform2fvEXT_Idx))


GLAPI void  APIENTRY glProgramUniform2fvEXT(GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform2fvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2fvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2fvEXT_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2fvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2fvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2fvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2fvEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2fvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform2fvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2fvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2fvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2fvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2fvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2fvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2fvEXT_Idx) = get_ts();
        }


	

}