#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveSubroutineUniformiv_wrp						\
    ((void  (*)(GLuint program,GLenum shadertype,GLuint index,GLenum pname,GLint *values                                        \
    ))GL_ENTRY_PTR(glGetActiveSubroutineUniformiv_Idx))


GLAPI void  APIENTRY glGetActiveSubroutineUniformiv(GLuint program,GLenum shadertype,GLuint index,GLenum pname,GLint *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveSubroutineUniformiv_Idx))
	{
            GL_ENTRY_PTR(glGetActiveSubroutineUniformiv_Idx) = dlsym(RTLD_NEXT,"glGetActiveSubroutineUniformiv");
            if(!GL_ENTRY_PTR(glGetActiveSubroutineUniformiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveSubroutineUniformiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveSubroutineUniformiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveSubroutineUniformiv_wrp(program,shadertype,index,pname,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveSubroutineUniformiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveSubroutineUniformiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveSubroutineUniformiv_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveSubroutineUniformiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveSubroutineUniformiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineUniformiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineUniformiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineUniformiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveSubroutineUniformiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveSubroutineUniformiv_Idx) = get_ts();
        }


	

}