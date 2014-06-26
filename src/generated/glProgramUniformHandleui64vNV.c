#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniformHandleui64vNV_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLuint64 *values                                        \
    ))GL_ENTRY_PTR(glProgramUniformHandleui64vNV_Idx))


GLAPI void  APIENTRY glProgramUniformHandleui64vNV(GLuint program,GLint location,GLsizei count,const GLuint64 *values)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniformHandleui64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniformHandleui64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniformHandleui64vNV_wrp(program,location,count,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniformHandleui64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniformHandleui64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniformHandleui64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniformHandleui64vNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniformHandleui64vNV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniformHandleui64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniformHandleui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformHandleui64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformHandleui64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniformHandleui64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniformHandleui64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniformHandleui64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniformHandleui64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniformHandleui64vNV_Idx) = get_ts();
        }


	

}