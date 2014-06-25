#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParameterI4ivEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,const GLint *params                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParameterI4ivEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParameterI4ivEXT(GLuint program,GLenum target,GLuint index,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedProgramLocalParameterI4ivEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedProgramLocalParameterI4ivEXT_Idx) = dlsym(RTLD_NEXT,"glNamedProgramLocalParameterI4ivEXT");
            if(!GL_ENTRY_PTR(glNamedProgramLocalParameterI4ivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4ivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4ivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParameterI4ivEXT_wrp(program,target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4ivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4ivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParameterI4ivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4ivEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParameterI4ivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParameterI4ivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4ivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4ivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4ivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4ivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4ivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4ivEXT_Idx) = get_ts();
        }


	

}