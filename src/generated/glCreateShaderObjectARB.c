#include <glTraceCommon.h>
#include <generated.h>

#define glCreateShaderObjectARB_wrp						\
    ((GLhandleARB  (*)(GLenum shaderType                                        \
    ))GL_ENTRY_PTR(glCreateShaderObjectARB_Idx))


GLAPI GLhandleARB  APIENTRY glCreateShaderObjectARB(GLenum shaderType)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCreateShaderObjectARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glCreateShaderObjectARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLhandleARB  retval = glCreateShaderObjectARB_wrp(shaderType);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCreateShaderObjectARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCreateShaderObjectARB_Idx) ++;

        GL_ENTRY_LAST_TS(glCreateShaderObjectARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCreateShaderObjectARB_Idx),
				 GL_ENTRY_LAST_TS(glCreateShaderObjectARB_Idx));


        if(last_diff > 1000000000){
            printf("glCreateShaderObjectARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCreateShaderObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShaderObjectARB_Idx),
	             GL_ENTRY_CALL_TIME(glCreateShaderObjectARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glCreateShaderObjectARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCreateShaderObjectARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCreateShaderObjectARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCreateShaderObjectARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCreateShaderObjectARB_Idx) = get_ts();
        }


	return retval;

}