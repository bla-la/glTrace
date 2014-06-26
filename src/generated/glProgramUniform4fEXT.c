#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform4fEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3                                        \
    ))GL_ENTRY_PTR(glProgramUniform4fEXT_Idx))


GLAPI void  APIENTRY glProgramUniform4fEXT(GLuint program,GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform4fEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform4fEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform4fEXT_wrp(program,location,v0,v1,v2,v3);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform4fEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform4fEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform4fEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform4fEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform4fEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform4fEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform4fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4fEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform4fEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform4fEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform4fEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform4fEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform4fEXT_Idx) = get_ts();
        }


	

}