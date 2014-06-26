#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedProgramLocalParameterIivEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetNamedProgramLocalParameterIivEXT_Idx))


GLAPI void  APIENTRY glGetNamedProgramLocalParameterIivEXT(GLuint program,GLenum target,GLuint index,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterIivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterIivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedProgramLocalParameterIivEXT_wrp(program,target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterIivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedProgramLocalParameterIivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterIivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedProgramLocalParameterIivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetNamedProgramLocalParameterIivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterIivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterIivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterIivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterIivEXT_Idx) = get_ts();
        }


	

}