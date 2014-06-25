#include <glTraceCommon.h>
#include <generated.h>

#define glDispatchComputeIndirect_wrp						\
    ((void  (*)(GLintptr indirect                                        \
    ))GL_ENTRY_PTR(glDispatchComputeIndirect_Idx))


GLAPI void  APIENTRY glDispatchComputeIndirect(GLintptr indirect)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDispatchComputeIndirect_Idx))
	{
            GL_ENTRY_PTR(glDispatchComputeIndirect_Idx) = dlsym(RTLD_NEXT,"glDispatchComputeIndirect");
            if(!GL_ENTRY_PTR(glDispatchComputeIndirect_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDispatchComputeIndirect_Idx))
    	{
            GL_ENTRY_PREV_TS(glDispatchComputeIndirect_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDispatchComputeIndirect_wrp(indirect);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDispatchComputeIndirect_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDispatchComputeIndirect_Idx) ++;

        GL_ENTRY_LAST_TS(glDispatchComputeIndirect_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDispatchComputeIndirect_Idx),
				 GL_ENTRY_LAST_TS(glDispatchComputeIndirect_Idx));
        if(last_diff > 1000000000){
            printf("glDispatchComputeIndirect %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDispatchComputeIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glDispatchComputeIndirect_Idx),
	             GL_ENTRY_CALL_TIME(glDispatchComputeIndirect_Idx) /
	             GL_ENTRY_CALL_COUNT(glDispatchComputeIndirect_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDispatchComputeIndirect_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDispatchComputeIndirect_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDispatchComputeIndirect_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDispatchComputeIndirect_Idx) = get_ts();
        }


	

}