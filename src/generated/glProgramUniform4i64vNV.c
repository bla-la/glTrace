#include <glTraceCommon.h>
#include <generated.h>

#define glProgramUniform4i64vNV_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei count,const GLint64EXT *value                                        \
    ))GL_ENTRY_PTR(glProgramUniform4i64vNV_Idx))


GLAPI void  APIENTRY glProgramUniform4i64vNV(GLuint program,GLint location,GLsizei count,const GLint64EXT *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramUniform4i64vNV_Idx))
	{
            GL_ENTRY_PTR(glProgramUniform4i64vNV_Idx) = dlsym(RTLD_NEXT,"glProgramUniform4i64vNV");
            if(!GL_ENTRY_PTR(glProgramUniform4i64vNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramUniform4i64vNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramUniform4i64vNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramUniform4i64vNV_wrp(program,location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramUniform4i64vNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramUniform4i64vNV_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramUniform4i64vNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramUniform4i64vNV_Idx),
				 GL_ENTRY_LAST_TS(glProgramUniform4i64vNV_Idx));
        if(last_diff > 1000000000){
            printf("glProgramUniform4i64vNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramUniform4i64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4i64vNV_Idx),
	             GL_ENTRY_CALL_TIME(glProgramUniform4i64vNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramUniform4i64vNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramUniform4i64vNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramUniform4i64vNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramUniform4i64vNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramUniform4i64vNV_Idx) = get_ts();
        }


	

}