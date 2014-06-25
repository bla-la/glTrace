#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniformui64NV_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint64EXT value                                        \
    ))GL_ENTRY_PTR(glProgramUniformui64NV_Idx))


GLAPI void  APIENTRY glProgramUniformui64NV(GLuint program,GLint location,GLuint64EXT value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniformui64NV_Idx))
	{
            GL_ENTRY_PTR(glProgramUniformui64NV_Idx) = dlsym(RTLD_NEXT,"glProgramUniformui64NV");
            if(!GL_ENTRY_PTR(glProgramUniformui64NV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniformui64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniformui64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniformui64NV_wrp(program,location,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniformui64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniformui64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniformui64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniformui64NV_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniformui64NV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniformui64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniformui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniformui64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniformui64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniformui64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniformui64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniformui64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniformui64NV_Idx) = get_ts();
        }


	

}