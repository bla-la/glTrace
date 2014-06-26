#include <glTraceCommon.h>
#include <generated.h>

#define glMemoryBarrierEXT_wrp						\
    ((void  (*)(GLbitfield barriers                                        \
    ))GL_ENTRY_PTR(glMemoryBarrierEXT_Idx))


GLAPI void  APIENTRY glMemoryBarrierEXT(GLbitfield barriers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMemoryBarrierEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glMemoryBarrierEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMemoryBarrierEXT_wrp(barriers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMemoryBarrierEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMemoryBarrierEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glMemoryBarrierEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMemoryBarrierEXT_Idx),
				 GL_ENTRY_LAST_TS(glMemoryBarrierEXT_Idx));


        if(last_diff > 1000000000){
            printf("glMemoryBarrierEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMemoryBarrierEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMemoryBarrierEXT_Idx),
	             GL_ENTRY_CALL_TIME(glMemoryBarrierEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glMemoryBarrierEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMemoryBarrierEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMemoryBarrierEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMemoryBarrierEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMemoryBarrierEXT_Idx) = get_ts();
        }


	

}