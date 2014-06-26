#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform3ivEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLint *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform3ivEXT_Idx))


GLAPI void  APIENTRY glProgramUniform3ivEXT(GLuint program,GLint location,GLsizei count,const GLint *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform3ivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform3ivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform3ivEXT_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform3ivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform3ivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform3ivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform3ivEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform3ivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform3ivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform3ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3ivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform3ivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform3ivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform3ivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform3ivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform3ivEXT_Idx) = get_ts();
        }


	

}