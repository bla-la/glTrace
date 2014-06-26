#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveSubroutineName_wrp						\
    ((void  (*)(GLuint program,GLenum shadertype,GLuint index,GLsizei bufsize,GLsizei *length,GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetActiveSubroutineName_Idx))


GLAPI void  APIENTRY glGetActiveSubroutineName(GLuint program,GLenum shadertype,GLuint index,GLsizei bufsize,GLsizei *length,GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetActiveSubroutineName_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveSubroutineName_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveSubroutineName_wrp(program,shadertype,index,bufsize,length,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveSubroutineName_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveSubroutineName_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveSubroutineName_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveSubroutineName_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveSubroutineName_Idx));


        if(last_diff > 1000000000){
            printf("glGetActiveSubroutineName %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineName_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveSubroutineName_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveSubroutineName_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineName_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveSubroutineName_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveSubroutineName_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveSubroutineName_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveSubroutineName_Idx) = get_ts();
        }


	

}