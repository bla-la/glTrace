#include <glTraceCommon.h>
#include <generated.h>

#define glGetCombinerStageParameterfvNV_wrp						\
    ((void  (*)(GLenum stage,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetCombinerStageParameterfvNV_Idx))


GLAPI void  APIENTRY glGetCombinerStageParameterfvNV(GLenum stage,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetCombinerStageParameterfvNV_Idx))
	{
            GL_ENTRY_PTR(glGetCombinerStageParameterfvNV_Idx) = dlsym(RTLD_NEXT,"glGetCombinerStageParameterfvNV");
            if(!GL_ENTRY_PTR(glGetCombinerStageParameterfvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetCombinerStageParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCombinerStageParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCombinerStageParameterfvNV_wrp(stage,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCombinerStageParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCombinerStageParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCombinerStageParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCombinerStageParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetCombinerStageParameterfvNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetCombinerStageParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCombinerStageParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerStageParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerStageParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCombinerStageParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCombinerStageParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCombinerStageParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCombinerStageParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCombinerStageParameterfvNV_Idx) = get_ts();
        }


	

}