#include <glTraceCommon.h>
#include <generated.h>

#define glGetFinalCombinerInputParameterfvNV_wrp						\
    ((void  (*)(GLenum variable,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetFinalCombinerInputParameterfvNV_Idx))


GLAPI void  APIENTRY glGetFinalCombinerInputParameterfvNV(GLenum variable,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFinalCombinerInputParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFinalCombinerInputParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFinalCombinerInputParameterfvNV_wrp(variable,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFinalCombinerInputParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFinalCombinerInputParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFinalCombinerInputParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetFinalCombinerInputParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetFinalCombinerInputParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFinalCombinerInputParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFinalCombinerInputParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFinalCombinerInputParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFinalCombinerInputParameterfvNV_Idx) = get_ts();
        }


	

}