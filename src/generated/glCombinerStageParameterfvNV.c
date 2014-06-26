#include <glTraceCommon.h>
#include <generated.h>

#define glCombinerStageParameterfvNV_wrp						\
    ((void  (*)(GLenum stage,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glCombinerStageParameterfvNV_Idx))


GLAPI void  APIENTRY glCombinerStageParameterfvNV(GLenum stage,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCombinerStageParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCombinerStageParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCombinerStageParameterfvNV_wrp(stage,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCombinerStageParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCombinerStageParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCombinerStageParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCombinerStageParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glCombinerStageParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glCombinerStageParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCombinerStageParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerStageParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glCombinerStageParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCombinerStageParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCombinerStageParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCombinerStageParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCombinerStageParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCombinerStageParameterfvNV_Idx) = get_ts();
        }


	

}