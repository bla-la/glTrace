#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageCallbackAMD_wrp						\
    ((void  (*)(GLDEBUGPROCAMD callback,void *userParam                                        \
    ))GL_ENTRY_PTR(glDebugMessageCallbackAMD_Idx))


GLAPI void  APIENTRY glDebugMessageCallbackAMD(GLDEBUGPROCAMD callback,void *userParam)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDebugMessageCallbackAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageCallbackAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageCallbackAMD_wrp(callback,userParam);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageCallbackAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageCallbackAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageCallbackAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageCallbackAMD_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageCallbackAMD_Idx));


        if(last_diff > 1000000000){
            printf("glDebugMessageCallbackAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageCallbackAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageCallbackAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageCallbackAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageCallbackAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageCallbackAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageCallbackAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageCallbackAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageCallbackAMD_Idx) = get_ts();
        }


	

}