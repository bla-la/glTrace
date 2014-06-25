#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParametersI4uivEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLsizei count,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParametersI4uivEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParametersI4uivEXT(GLuint program,GLenum target,GLuint index,GLsizei count,const GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedProgramLocalParametersI4uivEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedProgramLocalParametersI4uivEXT_Idx) = dlsym(RTLD_NEXT,"glNamedProgramLocalParametersI4uivEXT");
            if(!GL_ENTRY_PTR(glNamedProgramLocalParametersI4uivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParametersI4uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParametersI4uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParametersI4uivEXT_wrp(program,target,index,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParametersI4uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParametersI4uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParametersI4uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParametersI4uivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParametersI4uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParametersI4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParametersI4uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParametersI4uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParametersI4uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParametersI4uivEXT_Idx) = get_ts();
        }


	

}