#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramiv_wrp						\
    ((void  (*)(GLuint program,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramiv_Idx))


GLAPI void  APIENTRY glGetProgramiv(GLuint program,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramiv_wrp(program,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramiv_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramiv_Idx) = get_ts();
        }


	

}