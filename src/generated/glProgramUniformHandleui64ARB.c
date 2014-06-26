#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniformHandleui64ARB_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint64 value                                        \
    ))GL_ENTRY_PTR(glProgramUniformHandleui64ARB_Idx))


GLAPI void  APIENTRY glProgramUniformHandleui64ARB(GLuint program,GLint location,GLuint64 value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniformHandleui64ARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniformHandleui64ARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniformHandleui64ARB_wrp(program,location,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniformHandleui64ARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniformHandleui64ARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniformHandleui64ARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniformHandleui64ARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniformHandleui64ARB_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniformHandleui64ARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniformHandleui64ARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformHandleui64ARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformHandleui64ARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniformHandleui64ARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniformHandleui64ARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniformHandleui64ARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniformHandleui64ARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniformHandleui64ARB_Idx) = get_ts();
        }


	

}