#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedProgramLocalParameterdvEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetNamedProgramLocalParameterdvEXT_Idx))


GLAPI void  APIENTRY glGetNamedProgramLocalParameterdvEXT(GLuint program,GLenum target,GLuint index,GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetNamedProgramLocalParameterdvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetNamedProgramLocalParameterdvEXT_Idx) = dlsym(RTLD_NEXT,"glGetNamedProgramLocalParameterdvEXT");
            if(!GL_ENTRY_PTR(glGetNamedProgramLocalParameterdvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterdvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterdvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedProgramLocalParameterdvEXT_wrp(program,target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterdvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterdvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedProgramLocalParameterdvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterdvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedProgramLocalParameterdvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetNamedProgramLocalParameterdvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterdvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterdvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterdvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterdvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterdvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterdvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterdvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterdvEXT_Idx) = get_ts();
        }


	

}