#include <glTraceCommon.h>
#include <generated.h>

#define glCompileShaderARB_wrp						\
    ((void  (*)(GLhandleARB shaderObj                                        \
    ))GL_ENTRY_PTR(glCompileShaderARB_Idx))


GLAPI void  APIENTRY glCompileShaderARB(GLhandleARB shaderObj)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCompileShaderARB_Idx))
	{
            GL_ENTRY_PTR(glCompileShaderARB_Idx) = dlsym(RTLD_NEXT,"glCompileShaderARB");
            if(!GL_ENTRY_PTR(glCompileShaderARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCompileShaderARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glCompileShaderARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCompileShaderARB_wrp(shaderObj);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCompileShaderARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCompileShaderARB_Idx) ++;

        GL_ENTRY_LAST_TS(glCompileShaderARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCompileShaderARB_Idx),
				 GL_ENTRY_LAST_TS(glCompileShaderARB_Idx));
        if(last_diff > 1000000000){
            printf("glCompileShaderARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCompileShaderARB_Idx),
	             GL_ENTRY_CALL_TIME(glCompileShaderARB_Idx),
	             GL_ENTRY_CALL_TIME(glCompileShaderARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glCompileShaderARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCompileShaderARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCompileShaderARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCompileShaderARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCompileShaderARB_Idx) = get_ts();
        }


	

}