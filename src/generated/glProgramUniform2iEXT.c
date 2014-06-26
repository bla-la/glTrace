#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2iEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLint v0,GLint v1                                        \
    ))GL_ENTRY_PTR(glProgramUniform2iEXT_Idx))


GLAPI void  APIENTRY glProgramUniform2iEXT(GLuint program,GLint location,GLint v0,GLint v1)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform2iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2iEXT_wrp(program,location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2iEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2iEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform2iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2iEXT_Idx) = get_ts();
        }


	

}