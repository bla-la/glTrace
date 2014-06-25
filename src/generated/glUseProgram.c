#include <glTraceCommon.h>
#include <generated.h>

#define glUseProgram_wrp						\
    ((void  (*)(GLuint program                                        \
    ))GL_ENTRY_PTR(glUseProgram_Idx))


GLAPI void  APIENTRY glUseProgram(GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUseProgram_Idx))
	{
            GL_ENTRY_PTR(glUseProgram_Idx) = dlsym(RTLD_NEXT,"glUseProgram");
            if(!GL_ENTRY_PTR(glUseProgram_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUseProgram_Idx))
    	{
            GL_ENTRY_PREV_TS(glUseProgram_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUseProgram_wrp(program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUseProgram_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUseProgram_Idx) ++;

        GL_ENTRY_LAST_TS(glUseProgram_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUseProgram_Idx),
				 GL_ENTRY_LAST_TS(glUseProgram_Idx));
        if(last_diff > 1000000000){
            printf("glUseProgram %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUseProgram_Idx),
	             GL_ENTRY_CALL_TIME(glUseProgram_Idx),
	             GL_ENTRY_CALL_TIME(glUseProgram_Idx) /
	             GL_ENTRY_CALL_COUNT(glUseProgram_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUseProgram_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUseProgram_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUseProgram_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUseProgram_Idx) = get_ts();
        }


	

}