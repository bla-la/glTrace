#include <glTraceCommon.h>
#include <generated.h>

#define glCreateShaderProgramvEXT_wrp						\
    ((GLuint  (*)(GLenum type,GLsizei count,const GLchar **strings                                        \
    ))GL_ENTRY_PTR(glCreateShaderProgramvEXT_Idx))


GLAPI GLuint  APIENTRY glCreateShaderProgramvEXT(GLenum type,GLsizei count,const GLchar **strings)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCreateShaderProgramvEXT_Idx))
	{
            GL_ENTRY_PTR(glCreateShaderProgramvEXT_Idx) = dlsym(RTLD_NEXT,"glCreateShaderProgramvEXT");
            if(!GL_ENTRY_PTR(glCreateShaderProgramvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCreateShaderProgramvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glCreateShaderProgramvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glCreateShaderProgramvEXT_wrp(type,count,strings);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCreateShaderProgramvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCreateShaderProgramvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glCreateShaderProgramvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCreateShaderProgramvEXT_Idx),
				 GL_ENTRY_LAST_TS(glCreateShaderProgramvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glCreateShaderProgramvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCreateShaderProgramvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShaderProgramvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShaderProgramvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glCreateShaderProgramvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCreateShaderProgramvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCreateShaderProgramvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCreateShaderProgramvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCreateShaderProgramvEXT_Idx) = get_ts();
        }


	return retval;

}