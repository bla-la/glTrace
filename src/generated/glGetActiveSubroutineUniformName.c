#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveSubroutineUniformName_wrp						\
    ((void  (*)(GLuint program,GLenum shadertype,GLuint index,GLsizei bufsize,GLsizei *length,GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetActiveSubroutineUniformName_Idx))


GLAPI void  APIENTRY glGetActiveSubroutineUniformName(GLuint program,GLenum shadertype,GLuint index,GLsizei bufsize,GLsizei *length,GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveSubroutineUniformName_Idx))
	{
            GL_ENTRY_PTR(glGetActiveSubroutineUniformName_Idx) = dlsym(RTLD_NEXT,"glGetActiveSubroutineUniformName");
            if(!GL_ENTRY_PTR(glGetActiveSubroutineUniformName_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveSubroutineUniformName_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveSubroutineUniformName_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveSubroutineUniformName_wrp(program,shadertype,index,bufsize,length,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformName_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveSubroutineUniformName_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveSubroutineUniformName_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveSubroutineUniformName_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveSubroutineUniformName_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveSubroutineUniformName %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineUniformName_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformName_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformName_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineUniformName_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformName_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineUniformName_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformName_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveSubroutineUniformName_Idx) = get_ts();
        }


	

}