#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramNamedParameterfvNV_wrp						\
    ((void  (*)(GLuint id,GLsizei len,const GLubyte *name,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetProgramNamedParameterfvNV_Idx))


GLAPI void  APIENTRY glGetProgramNamedParameterfvNV(GLuint id,GLsizei len,const GLubyte *name,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramNamedParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramNamedParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramNamedParameterfvNV_wrp(id,len,name,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramNamedParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramNamedParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramNamedParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramNamedParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramNamedParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramNamedParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramNamedParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramNamedParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramNamedParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramNamedParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramNamedParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramNamedParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramNamedParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramNamedParameterfvNV_Idx) = get_ts();
        }


	

}