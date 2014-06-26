#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform4uiEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3                                        \
    ))GL_ENTRY_PTR(glProgramUniform4uiEXT_Idx))


GLAPI void  APIENTRY glProgramUniform4uiEXT(GLuint program,GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform4uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform4uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform4uiEXT_wrp(program,location,v0,v1,v2,v3);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform4uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform4uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform4uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform4uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform4uiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform4uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform4uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform4uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform4uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform4uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform4uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform4uiEXT_Idx) = get_ts();
        }


	

}