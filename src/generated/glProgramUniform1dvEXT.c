#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform1dvEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLdouble *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform1dvEXT_Idx))


GLAPI void  APIENTRY glProgramUniform1dvEXT(GLuint program,GLint location,GLsizei count,const GLdouble *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform1dvEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform1dvEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniform1dvEXT");
            if(!GL_ENTRY_PTR(glProgramUniform1dvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform1dvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform1dvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform1dvEXT_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform1dvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform1dvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform1dvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform1dvEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform1dvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform1dvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform1dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1dvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform1dvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform1dvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform1dvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform1dvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform1dvEXT_Idx) = get_ts();
        }


	

}