#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramInterfaceiv_wrp						\
    ((void  (*)(GLuint program,GLenum programInterface,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramInterfaceiv_Idx))


GLAPI void  APIENTRY glGetProgramInterfaceiv(GLuint program,GLenum programInterface,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramInterfaceiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramInterfaceiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramInterfaceiv_wrp(program,programInterface,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramInterfaceiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramInterfaceiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramInterfaceiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramInterfaceiv_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramInterfaceiv_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramInterfaceiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramInterfaceiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramInterfaceiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramInterfaceiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramInterfaceiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramInterfaceiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramInterfaceiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramInterfaceiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramInterfaceiv_Idx) = get_ts();
        }


	

}