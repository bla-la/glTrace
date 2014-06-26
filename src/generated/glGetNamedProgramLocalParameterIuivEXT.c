#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedProgramLocalParameterIuivEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetNamedProgramLocalParameterIuivEXT_Idx))


GLAPI void  APIENTRY glGetNamedProgramLocalParameterIuivEXT(GLuint program,GLenum target,GLuint index,GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterIuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterIuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedProgramLocalParameterIuivEXT_wrp(program,target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterIuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedProgramLocalParameterIuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterIuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedProgramLocalParameterIuivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetNamedProgramLocalParameterIuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterIuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterIuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterIuivEXT_Idx) = get_ts();
        }


	

}