#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParameterI4uiEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParameterI4uiEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParameterI4uiEXT(GLuint program,GLenum target,GLuint index,GLuint x,GLuint y,GLuint z,GLuint w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedProgramLocalParameterI4uiEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedProgramLocalParameterI4uiEXT_Idx) = dlsym(RTLD_NEXT,"glNamedProgramLocalParameterI4uiEXT");
            if(!GL_ENTRY_PTR(glNamedProgramLocalParameterI4uiEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParameterI4uiEXT_wrp(program,target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParameterI4uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParameterI4uiEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParameterI4uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4uiEXT_Idx) = get_ts();
        }


	

}