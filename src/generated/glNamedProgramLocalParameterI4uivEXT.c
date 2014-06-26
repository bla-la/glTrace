#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParameterI4uivEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,const GLuint *params                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParameterI4uivEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParameterI4uivEXT(GLuint program,GLenum target,GLuint index,const GLuint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParameterI4uivEXT_wrp(program,target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParameterI4uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParameterI4uivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParameterI4uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4uivEXT_Idx) = get_ts();
        }


	

}