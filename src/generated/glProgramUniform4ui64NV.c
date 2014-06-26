#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform4ui64NV_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w                                        \
    ))GL_ENTRY_PTR(glProgramUniform4ui64NV_Idx))


GLAPI void  APIENTRY glProgramUniform4ui64NV(GLuint program,GLint location,GLuint64EXT x,GLuint64EXT y,GLuint64EXT z,GLuint64EXT w)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramUniform4ui64NV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform4ui64NV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform4ui64NV_wrp(program,location,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform4ui64NV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform4ui64NV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform4ui64NV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform4ui64NV_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform4ui64NV_Idx));


        if(last_diff > 1000000000){
            printf("glProgramUniform4ui64NV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform4ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4ui64NV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4ui64NV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform4ui64NV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform4ui64NV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform4ui64NV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform4ui64NV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform4ui64NV_Idx) = get_ts();
        }


	

}