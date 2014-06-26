#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramInfoLog_wrp						\
    ((void  (*)(GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog                                        \
    ))GL_ENTRY_PTR(glGetProgramInfoLog_Idx))


GLAPI void  APIENTRY glGetProgramInfoLog(GLuint program,GLsizei bufSize,GLsizei *length,GLchar *infoLog)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramInfoLog_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramInfoLog_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramInfoLog_wrp(program,bufSize,length,infoLog);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramInfoLog_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramInfoLog_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramInfoLog_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramInfoLog_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramInfoLog_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramInfoLog %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramInfoLog_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramInfoLog_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramInfoLog_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramInfoLog_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramInfoLog_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramInfoLog_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramInfoLog_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramInfoLog_Idx) = get_ts();
        }


	

}