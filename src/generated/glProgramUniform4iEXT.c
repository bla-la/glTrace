#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform4iEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLint v0,GLint v1,GLint v2,GLint v3                                        \
    ))GL_ENTRY_PTR(glProgramUniform4iEXT_Idx))


GLAPI void  APIENTRY glProgramUniform4iEXT(GLuint program,GLint location,GLint v0,GLint v1,GLint v2,GLint v3)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform4iEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform4iEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniform4iEXT");
            if(!GL_ENTRY_PTR(glProgramUniform4iEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform4iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform4iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform4iEXT_wrp(program,location,v0,v1,v2,v3);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform4iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform4iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform4iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform4iEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform4iEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform4iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform4iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform4iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform4iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform4iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform4iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform4iEXT_Idx) = get_ts();
        }


	

}