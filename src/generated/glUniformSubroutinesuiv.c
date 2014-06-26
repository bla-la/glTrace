#include <glTraceCommon.h>
#include <generated.h>

#define glUniformSubroutinesuiv_wrp						\
    ((void  (*)(GLenum shadertype,GLsizei count,const GLuint *indices                                        \
    ))GL_ENTRY_PTR(glUniformSubroutinesuiv_Idx))


GLAPI void  APIENTRY glUniformSubroutinesuiv(GLenum shadertype,GLsizei count,const GLuint *indices)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniformSubroutinesuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformSubroutinesuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformSubroutinesuiv_wrp(shadertype,count,indices);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformSubroutinesuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformSubroutinesuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformSubroutinesuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformSubroutinesuiv_Idx),
				 GL_ENTRY_LAST_TS(glUniformSubroutinesuiv_Idx));


        if(last_diff > 1000000000){
            printf("glUniformSubroutinesuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformSubroutinesuiv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformSubroutinesuiv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformSubroutinesuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformSubroutinesuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformSubroutinesuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformSubroutinesuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformSubroutinesuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformSubroutinesuiv_Idx) = get_ts();
        }


	

}