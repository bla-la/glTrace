#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParametersI4ivEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLsizei count,const GLint *params                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParametersI4ivEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParametersI4ivEXT(GLuint program,GLenum target,GLuint index,GLsizei count,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedProgramLocalParametersI4ivEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedProgramLocalParametersI4ivEXT_Idx) = dlsym(RTLD_NEXT,"glNamedProgramLocalParametersI4ivEXT");
            if(!GL_ENTRY_PTR(glNamedProgramLocalParametersI4ivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParametersI4ivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParametersI4ivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParametersI4ivEXT_wrp(program,target,index,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4ivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParametersI4ivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParametersI4ivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParametersI4ivEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParametersI4ivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParametersI4ivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParametersI4ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4ivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4ivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParametersI4ivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4ivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParametersI4ivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4ivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParametersI4ivEXT_Idx) = get_ts();
        }


	

}