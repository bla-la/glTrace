#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2uivEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform2uivEXT_Idx))


GLAPI void  APIENTRY glProgramUniform2uivEXT(GLuint program,GLint location,GLsizei count,const GLuint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform2uivEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform2uivEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniform2uivEXT");
            if(!GL_ENTRY_PTR(glProgramUniform2uivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform2uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2uivEXT_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2uivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform2uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2uivEXT_Idx) = get_ts();
        }


	

}