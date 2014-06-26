#include <glTraceCommon.h>
#include <generated.h>

#define glGetSubroutineUniformLocation_wrp						\
    ((GLint  (*)(GLuint program,GLenum shadertype,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetSubroutineUniformLocation_Idx))


GLAPI GLint  APIENTRY glGetSubroutineUniformLocation(GLuint program,GLenum shadertype,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSubroutineUniformLocation_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSubroutineUniformLocation_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetSubroutineUniformLocation_wrp(program,shadertype,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSubroutineUniformLocation_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSubroutineUniformLocation_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSubroutineUniformLocation_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSubroutineUniformLocation_Idx),
				 GL_ENTRY_LAST_TS(glGetSubroutineUniformLocation_Idx));


        if(last_diff > 1000000000){
            printf("glGetSubroutineUniformLocation %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSubroutineUniformLocation_Idx),
	             GL_ENTRY_CALL_TIME(glGetSubroutineUniformLocation_Idx),
	             GL_ENTRY_CALL_TIME(glGetSubroutineUniformLocation_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSubroutineUniformLocation_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSubroutineUniformLocation_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSubroutineUniformLocation_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSubroutineUniformLocation_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSubroutineUniformLocation_Idx) = get_ts();
        }


	return retval;

}