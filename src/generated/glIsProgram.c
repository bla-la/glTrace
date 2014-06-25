#include <glTraceCommon.h>
#include <generated.h>

#define glIsProgram_wrp						\
    ((GLboolean  (*)(GLuint program                                        \
    ))GL_ENTRY_PTR(glIsProgram_Idx))


GLAPI GLboolean  APIENTRY glIsProgram(GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsProgram_Idx))
	{
            GL_ENTRY_PTR(glIsProgram_Idx) = dlsym(RTLD_NEXT,"glIsProgram");
            if(!GL_ENTRY_PTR(glIsProgram_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsProgram_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsProgram_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsProgram_wrp(program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsProgram_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsProgram_Idx) ++;

        GL_ENTRY_LAST_TS(glIsProgram_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsProgram_Idx),
				 GL_ENTRY_LAST_TS(glIsProgram_Idx));
        if(last_diff > 1000000000){
            printf("glIsProgram %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsProgram_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgram_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgram_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsProgram_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsProgram_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsProgram_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsProgram_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsProgram_Idx) = get_ts();
        }


	return retval;

}