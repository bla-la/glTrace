#include <glTraceCommon.h>
#include <generated.h>

#define glGetCombinerInputParameterivNV_wrp						\
    ((void  (*)(GLenum stage,GLenum portion,GLenum variable,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetCombinerInputParameterivNV_Idx))


GLAPI void  APIENTRY glGetCombinerInputParameterivNV(GLenum stage,GLenum portion,GLenum variable,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetCombinerInputParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetCombinerInputParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetCombinerInputParameterivNV_wrp(stage,portion,variable,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetCombinerInputParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetCombinerInputParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetCombinerInputParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetCombinerInputParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetCombinerInputParameterivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetCombinerInputParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetCombinerInputParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerInputParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetCombinerInputParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetCombinerInputParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetCombinerInputParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetCombinerInputParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetCombinerInputParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetCombinerInputParameterivNV_Idx) = get_ts();
        }


	

}