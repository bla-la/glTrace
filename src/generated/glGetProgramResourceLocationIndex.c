#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramResourceLocationIndex_wrp						\
    ((GLint  (*)(GLuint program,GLenum programInterface,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetProgramResourceLocationIndex_Idx))


GLAPI GLint  APIENTRY glGetProgramResourceLocationIndex(GLuint program,GLenum programInterface,const GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramResourceLocationIndex_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramResourceLocationIndex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetProgramResourceLocationIndex_wrp(program,programInterface,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramResourceLocationIndex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramResourceLocationIndex_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramResourceLocationIndex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramResourceLocationIndex_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramResourceLocationIndex_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramResourceLocationIndex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceLocationIndex_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceLocationIndex_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceLocationIndex_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceLocationIndex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramResourceLocationIndex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramResourceLocationIndex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramResourceLocationIndex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramResourceLocationIndex_Idx) = get_ts();
        }


	return retval;

}