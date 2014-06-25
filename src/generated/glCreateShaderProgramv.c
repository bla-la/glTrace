#include <glTraceCommon.h>
#include <generated.h>

#define glCreateShaderProgramv_wrp						\
    ((GLuint  (*)(GLenum type,GLsizei count,const GLchar *const*strings                                        \
    ))GL_ENTRY_PTR(glCreateShaderProgramv_Idx))


GLAPI GLuint  APIENTRY glCreateShaderProgramv(GLenum type,GLsizei count,const GLchar *const*strings)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCreateShaderProgramv_Idx))
	{
            GL_ENTRY_PTR(glCreateShaderProgramv_Idx) = dlsym(RTLD_NEXT,"glCreateShaderProgramv");
            if(!GL_ENTRY_PTR(glCreateShaderProgramv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCreateShaderProgramv_Idx))
    	{
            GL_ENTRY_PREV_TS(glCreateShaderProgramv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glCreateShaderProgramv_wrp(type,count,strings);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCreateShaderProgramv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCreateShaderProgramv_Idx) ++;

        GL_ENTRY_LAST_TS(glCreateShaderProgramv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCreateShaderProgramv_Idx),
				 GL_ENTRY_LAST_TS(glCreateShaderProgramv_Idx));
        if(last_diff > 1000000000){
            printf("glCreateShaderProgramv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCreateShaderProgramv_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShaderProgramv_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShaderProgramv_Idx) /
	             GL_ENTRY_CALL_COUNT(glCreateShaderProgramv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCreateShaderProgramv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCreateShaderProgramv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCreateShaderProgramv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCreateShaderProgramv_Idx) = get_ts();
        }


	return retval;

}