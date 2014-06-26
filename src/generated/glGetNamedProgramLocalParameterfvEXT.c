#include <glTraceCommon.h>
#include <generated.h>

#define glGetNamedProgramLocalParameterfvEXT_wrp						\
    ((void  (*)(GLuint program,GLenum target,GLuint index,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetNamedProgramLocalParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetNamedProgramLocalParameterfvEXT(GLuint program,GLenum target,GLuint index,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetNamedProgramLocalParameterfvEXT_wrp(program,target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetNamedProgramLocalParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetNamedProgramLocalParameterfvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glGetNamedProgramLocalParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetNamedProgramLocalParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetNamedProgramLocalParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetNamedProgramLocalParameterfvEXT_Idx) = get_ts();
        }


	

}