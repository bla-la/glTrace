#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedProgramivEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetNamedProgramivEXT_Idx))


GLAPI void  APIENTRY glGetNamedProgramivEXT(GLuint program,GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNamedProgramivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetNamedProgramivEXT_Idx) = dlsym(RTLD_NEXT,"glGetNamedProgramivEXT");
            if(!GL_ENTRY_PTR(glGetNamedProgramivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNamedProgramivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedProgramivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedProgramivEXT_wrp(program,target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedProgramivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedProgramivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedProgramivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedProgramivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedProgramivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetNamedProgramivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedProgramivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedProgramivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedProgramivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedProgramivEXT_Idx) = get_ts();
        }


	

}