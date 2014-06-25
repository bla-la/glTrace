#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform4uivEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform4uivEXT_Idx))


GLAPI void  APIENTRY glProgramUniform4uivEXT(GLuint program,GLint location,GLsizei count,const GLuint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform4uivEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform4uivEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniform4uivEXT");
            if(!GL_ENTRY_PTR(glProgramUniform4uivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform4uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform4uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform4uivEXT_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform4uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform4uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform4uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform4uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform4uivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform4uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform4uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform4uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform4uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform4uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform4uivEXT_Idx) = get_ts();
        }


	

}