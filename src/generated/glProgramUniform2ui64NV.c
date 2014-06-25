#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform2ui64NV_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y                                        \
    ))GL_ENTRY_PTR(glProgramUniform2ui64NV_Idx))


GLAPI void  APIENTRY glProgramUniform2ui64NV(GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform2ui64NV_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform2ui64NV_Idx) = dlsym(RTLD_NEXT,"glProgramUniform2ui64NV");
            if(!GL_ENTRY_PTR(glProgramUniform2ui64NV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform2ui64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform2ui64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform2ui64NV_wrp(program,location,x,y);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform2ui64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform2ui64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform2ui64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform2ui64NV_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform2ui64NV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform2ui64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform2ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform2ui64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform2ui64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform2ui64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform2ui64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform2ui64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform2ui64NV_Idx) = get_ts();
        }


	

}