#include <glTraceCommon.h>
#include <generated.h>

#define glNamedProgramLocalParameterI4iEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w                                        \
    ))GL_ENTRY_PTR(glNamedProgramLocalParameterI4iEXT_Idx))


GLAPI void  APIENTRY glNamedProgramLocalParameterI4iEXT(GLuint program,GLenum target,GLuint index,GLint x,GLint y,GLint z,GLint w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glNamedProgramLocalParameterI4iEXT_Idx))
	{
            GL_ENTRY_PTR(glNamedProgramLocalParameterI4iEXT_Idx) = dlsym(RTLD_NEXT,"glNamedProgramLocalParameterI4iEXT");
            if(!GL_ENTRY_PTR(glNamedProgramLocalParameterI4iEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4iEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4iEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glNamedProgramLocalParameterI4iEXT_wrp(program,target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4iEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4iEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glNamedProgramLocalParameterI4iEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4iEXT_Idx),
				 GL_ENTRY_LAST_TS(glNamedProgramLocalParameterI4iEXT_Idx));
        if(last_diff > 1000000000){
            printf("glNamedProgramLocalParameterI4iEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4iEXT_Idx),
	             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4iEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4iEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4iEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glNamedProgramLocalParameterI4iEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glNamedProgramLocalParameterI4iEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glNamedProgramLocalParameterI4iEXT_Idx) = get_ts();
        }


	

}