#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageCallback_wrp						\
    ((void  (*)(GLDEBUGPROC callback,const void *userParam                                        \
    ))GL_ENTRY_PTR(glDebugMessageCallback_Idx))


GLAPI void  APIENTRY glDebugMessageCallback(GLDEBUGPROC callback,const void *userParam)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDebugMessageCallback_Idx))
	{
            GL_ENTRY_PTR(glDebugMessageCallback_Idx) = dlsym(RTLD_NEXT,"glDebugMessageCallback");
            if(!GL_ENTRY_PTR(glDebugMessageCallback_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDebugMessageCallback_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageCallback_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageCallback_wrp(callback,userParam);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageCallback_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageCallback_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageCallback_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageCallback_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageCallback_Idx));
        if(last_diff > 1000000000){
            printf("glDebugMessageCallback %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageCallback_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageCallback_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageCallback_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageCallback_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageCallback_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageCallback_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageCallback_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageCallback_Idx) = get_ts();
        }


	

}