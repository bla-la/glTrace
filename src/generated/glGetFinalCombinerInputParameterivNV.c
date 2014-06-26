#include <glTraceCommon.h>
#include <generated.h>

#define glGetFinalCombinerInputParameterivNV_wrp						\
    ((void  (*)(GLenum variable,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetFinalCombinerInputParameterivNV_Idx))


GLAPI void  APIENTRY glGetFinalCombinerInputParameterivNV(GLenum variable,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetFinalCombinerInputParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetFinalCombinerInputParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetFinalCombinerInputParameterivNV_wrp(variable,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetFinalCombinerInputParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetFinalCombinerInputParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetFinalCombinerInputParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetFinalCombinerInputParameterivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetFinalCombinerInputParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetFinalCombinerInputParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetFinalCombinerInputParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetFinalCombinerInputParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetFinalCombinerInputParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetFinalCombinerInputParameterivNV_Idx) = get_ts();
        }


	

}