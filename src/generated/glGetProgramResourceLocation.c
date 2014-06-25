#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramResourceLocation_wrp						\
    ((GLint  (*)(GLuint program,GLenum programInterface,const GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetProgramResourceLocation_Idx))


GLAPI GLint  APIENTRY glGetProgramResourceLocation(GLuint program,GLenum programInterface,const GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramResourceLocation_Idx))
	{
            GL_ENTRY_PTR(glGetProgramResourceLocation_Idx) = dlsym(RTLD_NEXT,"glGetProgramResourceLocation");
            if(!GL_ENTRY_PTR(glGetProgramResourceLocation_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramResourceLocation_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramResourceLocation_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetProgramResourceLocation_wrp(program,programInterface,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramResourceLocation_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramResourceLocation_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramResourceLocation_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramResourceLocation_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramResourceLocation_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramResourceLocation %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceLocation_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceLocation_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramResourceLocation_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramResourceLocation_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramResourceLocation_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramResourceLocation_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramResourceLocation_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramResourceLocation_Idx) = get_ts();
        }


	return retval;

}