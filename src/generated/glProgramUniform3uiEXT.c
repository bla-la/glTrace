#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform3uiEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2                                        \
    ))GL_ENTRY_PTR(glProgramUniform3uiEXT_Idx))


GLAPI void  APIENTRY glProgramUniform3uiEXT(GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform3uiEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform3uiEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniform3uiEXT");
            if(!GL_ENTRY_PTR(glProgramUniform3uiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform3uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform3uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform3uiEXT_wrp(program,location,v0,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform3uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform3uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform3uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform3uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform3uiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform3uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform3uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform3uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform3uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform3uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform3uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform3uiEXT_Idx) = get_ts();
        }


	

}