#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform3dEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLdouble x,GLdouble y,GLdouble z                                        \
    ))GL_ENTRY_PTR(glProgramUniform3dEXT_Idx))


GLAPI void  APIENTRY glProgramUniform3dEXT(GLuint program,GLint location,GLdouble x,GLdouble y,GLdouble z)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform3dEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform3dEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform3dEXT_wrp(program,location,x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform3dEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform3dEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform3dEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform3dEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform3dEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform3dEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform3dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3dEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform3dEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform3dEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform3dEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform3dEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform3dEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform3dEXT_Idx) = get_ts();
        }


	

}