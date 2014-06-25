#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2uiEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint v0,GLuint v1                                        \
    ))GL_ENTRY_PTR(glProgramUniform2uiEXT_Idx))


GLAPI void  APIENTRY glProgramUniform2uiEXT(GLuint program,GLint location,GLuint v0,GLuint v1)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform2uiEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform2uiEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniform2uiEXT");
            if(!GL_ENTRY_PTR(glProgramUniform2uiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform2uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2uiEXT_wrp(program,location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2uiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform2uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2uiEXT_Idx) = get_ts();
        }


	

}