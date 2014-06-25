#include <glTraceCommon.h>
#include <generated.h>

#define glValidateProgram_wrp						\
    ((void  (*)(GLuint program                                        \
    ))GL_ENTRY_PTR(glValidateProgram_Idx))


GLAPI void  APIENTRY glValidateProgram(GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glValidateProgram_Idx))
	{
            GL_ENTRY_PTR(glValidateProgram_Idx) = dlsym(RTLD_NEXT,"glValidateProgram");
            if(!GL_ENTRY_PTR(glValidateProgram_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glValidateProgram_Idx))
    	{
            GL_ENTRY_PREV_TS(glValidateProgram_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glValidateProgram_wrp(program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glValidateProgram_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glValidateProgram_Idx) ++;

        GL_ENTRY_LAST_TS(glValidateProgram_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glValidateProgram_Idx),
				 GL_ENTRY_LAST_TS(glValidateProgram_Idx));
        if(last_diff > 1000000000){
            printf("glValidateProgram %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glValidateProgram_Idx),
	             GL_ENTRY_CALL_TIME(glValidateProgram_Idx),
	             GL_ENTRY_CALL_TIME(glValidateProgram_Idx) /
	             GL_ENTRY_CALL_COUNT(glValidateProgram_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glValidateProgram_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glValidateProgram_Idx) = 0;
             GL_ENTRY_CALL_TIME(glValidateProgram_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glValidateProgram_Idx) = get_ts();
        }


	

}