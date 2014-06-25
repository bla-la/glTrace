#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform1dEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLdouble x                                        \
    ))GL_ENTRY_PTR(glProgramUniform1dEXT_Idx))


GLAPI void  APIENTRY glProgramUniform1dEXT(GLuint program,GLint location,GLdouble x)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform1dEXT_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform1dEXT_Idx) = dlsym(RTLD_NEXT,"glProgramUniform1dEXT");
            if(!GL_ENTRY_PTR(glProgramUniform1dEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform1dEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform1dEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform1dEXT_wrp(program,location,x);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform1dEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform1dEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform1dEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform1dEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform1dEXT_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform1dEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform1dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1dEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform1dEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform1dEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform1dEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform1dEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform1dEXT_Idx) = get_ts();
        }


	

}