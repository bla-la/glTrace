#include <glTraceCommon.h>
#include <generated.h>

#define glGetSubroutineIndex_wrp						\
    ((GLuint  (*)(GLuint program,GLenum shadertype,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetSubroutineIndex_Idx))


GLAPI GLuint  APIENTRY glGetSubroutineIndex(GLuint program,GLenum shadertype,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetSubroutineIndex_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetSubroutineIndex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGetSubroutineIndex_wrp(program,shadertype,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetSubroutineIndex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetSubroutineIndex_Idx) ++;

        GL_ENTRY_LAST_TS(glGetSubroutineIndex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetSubroutineIndex_Idx),
				 GL_ENTRY_LAST_TS(glGetSubroutineIndex_Idx));


        if(last_diff > 1000000000){
            printf("glGetSubroutineIndex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetSubroutineIndex_Idx),
	             GL_ENTRY_CALL_TIME(glGetSubroutineIndex_Idx),
	             GL_ENTRY_CALL_TIME(glGetSubroutineIndex_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetSubroutineIndex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetSubroutineIndex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetSubroutineIndex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetSubroutineIndex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetSubroutineIndex_Idx) = get_ts();
        }


	return retval;

}