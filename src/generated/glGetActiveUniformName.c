#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveUniformName_wrp						\
    ((void  (*)(GLuint program,GLuint uniformIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformName                                        \
    ))GL_ENTRY_PTR(glGetActiveUniformName_Idx))


GLAPI void  APIENTRY glGetActiveUniformName(GLuint program,GLuint uniformIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformName)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetActiveUniformName_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveUniformName_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveUniformName_wrp(program,uniformIndex,bufSize,length,uniformName);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveUniformName_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveUniformName_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveUniformName_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveUniformName_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveUniformName_Idx));


        if(last_diff > 1000000000){
            printf("glGetActiveUniformName %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformName_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformName_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformName_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformName_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveUniformName_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveUniformName_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveUniformName_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveUniformName_Idx) = get_ts();
        }


	

}