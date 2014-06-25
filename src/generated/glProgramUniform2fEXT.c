#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2fEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLfloat v0,GLfloat v1                                        \
    ))GL_ENTRY_PTR(glProgramUniform2fEXT_Idx))


GLAPI void  APIENTRY glProgramUniform2fEXT(GLuint program,GLint location,GLfloat v0,GLfloat v1)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform2fEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform2fEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniform2fEXT");
            if(!GL_ENTRY_PTR(glProgramUniform2fEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform2fEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2fEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2fEXT_wrp(program,location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2fEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2fEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2fEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2fEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2fEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform2fEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2fEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2fEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2fEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2fEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2fEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2fEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2fEXT_Idx) = get_ts();
        }


	

}