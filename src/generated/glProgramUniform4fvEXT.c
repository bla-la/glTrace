#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform4fvEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform4fvEXT_Idx))


GLAPI void  APIENTRY glProgramUniform4fvEXT(GLuint program,GLint location,GLsizei count,const GLfloat *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform4fvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform4fvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform4fvEXT_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform4fvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform4fvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform4fvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform4fvEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform4fvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform4fvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform4fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4fvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform4fvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform4fvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform4fvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform4fvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform4fvEXT_Idx) = get_ts();
        }


	

}