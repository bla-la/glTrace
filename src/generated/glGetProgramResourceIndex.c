#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramResourceIndex_wrp						\
    ((GLuint  (*)(GLuint program,GLenum programInterface,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetProgramResourceIndex_Idx))


GLAPI GLuint  APIENTRY glGetProgramResourceIndex(GLuint program,GLenum programInterface,const GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramResourceIndex_Idx))
	{
            GL_ENTRY_PTR(glGetProgramResourceIndex_Idx) = dlsym(RTLD_NEXT,"glGetProgramResourceIndex");
            if(!GL_ENTRY_PTR(glGetProgramResourceIndex_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramResourceIndex_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramResourceIndex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGetProgramResourceIndex_wrp(program,programInterface,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramResourceIndex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramResourceIndex_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramResourceIndex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramResourceIndex_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramResourceIndex_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramResourceIndex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceIndex_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceIndex_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceIndex_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceIndex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramResourceIndex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramResourceIndex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramResourceIndex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramResourceIndex_Idx) = get_ts();
        }


	return retval;

}