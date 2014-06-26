#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramNamedParameterdvNV_wrp						\
    ((void  (*)(GLuint id,GLsizei len,const GLubyte *name,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetProgramNamedParameterdvNV_Idx))


GLAPI void  APIENTRY glGetProgramNamedParameterdvNV(GLuint id,GLsizei len,const GLubyte *name,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramNamedParameterdvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramNamedParameterdvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramNamedParameterdvNV_wrp(id,len,name,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramNamedParameterdvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramNamedParameterdvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramNamedParameterdvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramNamedParameterdvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramNamedParameterdvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramNamedParameterdvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramNamedParameterdvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramNamedParameterdvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramNamedParameterdvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramNamedParameterdvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramNamedParameterdvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramNamedParameterdvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramNamedParameterdvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramNamedParameterdvNV_Idx) = get_ts();
        }


	

}