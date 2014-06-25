#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniformMatrix4x3dvEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value                                        \
    ))GL_ENTRY_PTR(glProgramUniformMatrix4x3dvEXT_Idx))


GLAPI void  APIENTRY glProgramUniformMatrix4x3dvEXT(GLuint program,GLint location,GLsizei count,GLboolean transpose,const GLdouble *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniformMatrix4x3dvEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniformMatrix4x3dvEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniformMatrix4x3dvEXT");
            if(!GL_ENTRY_PTR(glProgramUniformMatrix4x3dvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniformMatrix4x3dvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniformMatrix4x3dvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniformMatrix4x3dvEXT_wrp(program,location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniformMatrix4x3dvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniformMatrix4x3dvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniformMatrix4x3dvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniformMatrix4x3dvEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniformMatrix4x3dvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniformMatrix4x3dvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix4x3dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformMatrix4x3dvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformMatrix4x3dvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix4x3dvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniformMatrix4x3dvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniformMatrix4x3dvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniformMatrix4x3dvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniformMatrix4x3dvEXT_Idx) = get_ts();
        }


	

}