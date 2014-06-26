#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramParameterfvNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetProgramParameterfvNV_Idx))


GLAPI void  APIENTRY glGetProgramParameterfvNV(GLenum target,GLuint index,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramParameterfvNV_wrp(target,index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramParameterfvNV_Idx) = get_ts();
        }


	

}