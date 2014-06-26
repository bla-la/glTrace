#include <glTraceCommon.h>
#include <generated.h>

#define glMemoryBarrierByRegion_wrp						\
    ((void  (*)(GLbitfield barriers                                        \
    ))GL_ENTRY_PTR(glMemoryBarrierByRegion_Idx))


GLAPI void  APIENTRY glMemoryBarrierByRegion(GLbitfield barriers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMemoryBarrierByRegion_Idx))
    	{
            GL_ENTRY_PREV_TS(glMemoryBarrierByRegion_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMemoryBarrierByRegion_wrp(barriers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMemoryBarrierByRegion_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMemoryBarrierByRegion_Idx) ++;

        GL_ENTRY_LAST_TS(glMemoryBarrierByRegion_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMemoryBarrierByRegion_Idx),
				 GL_ENTRY_LAST_TS(glMemoryBarrierByRegion_Idx));


        if(last_diff > 1000000000){
            printf("glMemoryBarrierByRegion %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMemoryBarrierByRegion_Idx),
	             GL_ENTRY_CALL_TIME(glMemoryBarrierByRegion_Idx),
	             GL_ENTRY_CALL_TIME(glMemoryBarrierByRegion_Idx) /
	             GL_ENTRY_CALL_COUNT(glMemoryBarrierByRegion_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMemoryBarrierByRegion_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMemoryBarrierByRegion_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMemoryBarrierByRegion_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMemoryBarrierByRegion_Idx) = get_ts();
        }


	

}