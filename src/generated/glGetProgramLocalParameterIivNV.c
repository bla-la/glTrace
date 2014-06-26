#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramLocalParameterIivNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramLocalParameterIivNV_Idx))


GLAPI void  APIENTRY glGetProgramLocalParameterIivNV(GLenum target,GLuint index,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramLocalParameterIivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramLocalParameterIivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramLocalParameterIivNV_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramLocalParameterIivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterIivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramLocalParameterIivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramLocalParameterIivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramLocalParameterIivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramLocalParameterIivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterIivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterIivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterIivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterIivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramLocalParameterIivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterIivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterIivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramLocalParameterIivNV_Idx) = get_ts();
        }


	

}