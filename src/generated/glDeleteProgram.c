#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteProgram_wrp						\
    ((void  (*)(GLuint program                                        \
    ))GL_ENTRY_PTR(glDeleteProgram_Idx))


GLAPI void  APIENTRY glDeleteProgram(GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteProgram_Idx))
	{
            GL_ENTRY_PTR(glDeleteProgram_Idx) = dlsym(RTLD_NEXT,"glDeleteProgram");
            if(!GL_ENTRY_PTR(glDeleteProgram_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteProgram_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteProgram_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteProgram_wrp(program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteProgram_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteProgram_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteProgram_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteProgram_Idx),
				 GL_ENTRY_LAST_TS(glDeleteProgram_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteProgram %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteProgram_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgram_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteProgram_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteProgram_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteProgram_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteProgram_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteProgram_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteProgram_Idx) = get_ts();
        }


	

}