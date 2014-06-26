#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformSubroutineuiv_wrp						\
    ((void  (*)(GLenum shadertype,GLint location,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetUniformSubroutineuiv_Idx))


GLAPI void  APIENTRY glGetUniformSubroutineuiv(GLenum shadertype,GLint location,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetUniformSubroutineuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformSubroutineuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformSubroutineuiv_wrp(shadertype,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformSubroutineuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformSubroutineuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformSubroutineuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformSubroutineuiv_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformSubroutineuiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetUniformSubroutineuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformSubroutineuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformSubroutineuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformSubroutineuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformSubroutineuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformSubroutineuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformSubroutineuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformSubroutineuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformSubroutineuiv_Idx) = get_ts();
        }


	

}