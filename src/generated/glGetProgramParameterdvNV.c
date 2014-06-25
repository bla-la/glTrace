#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramParameterdvNV_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetProgramParameterdvNV_Idx))


GLAPI void  APIENTRY glGetProgramParameterdvNV(GLenum target,GLuint index,GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramParameterdvNV_Idx))
	{
            GL_ENTRY_PTR(glGetProgramParameterdvNV_Idx) = dlsym(RTLD_NEXT,"glGetProgramParameterdvNV");
            if(!GL_ENTRY_PTR(glGetProgramParameterdvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramParameterdvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramParameterdvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramParameterdvNV_wrp(target,index,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramParameterdvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramParameterdvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramParameterdvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramParameterdvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramParameterdvNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramParameterdvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramParameterdvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramParameterdvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramParameterdvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramParameterdvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramParameterdvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramParameterdvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramParameterdvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramParameterdvNV_Idx) = get_ts();
        }


	

}