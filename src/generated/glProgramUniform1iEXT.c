#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform1iEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLint v0                                        \
    ))GL_ENTRY_PTR(glProgramUniform1iEXT_Idx))


GLAPI void  APIENTRY glProgramUniform1iEXT(GLuint program,GLint location,GLint v0)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform1iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform1iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform1iEXT_wrp(program,location,v0);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform1iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform1iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform1iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform1iEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform1iEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform1iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform1iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform1iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform1iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform1iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform1iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform1iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform1iEXT_Idx) = get_ts();
        }


	

}