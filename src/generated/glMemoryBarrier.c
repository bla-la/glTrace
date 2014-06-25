#include <glTraceCommon.h>
#include <generated.h>

#define glMemoryBarrier_wrp						\
    ((void  (*)(GLbitfield barriers                                        \
    ))GL_ENTRY_PTR(glMemoryBarrier_Idx))


GLAPI void  APIENTRY glMemoryBarrier(GLbitfield barriers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMemoryBarrier_Idx))
	{
            GL_ENTRY_PTR(glMemoryBarrier_Idx) = dlsym(RTLD_NEXT,"glMemoryBarrier");
            if(!GL_ENTRY_PTR(glMemoryBarrier_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMemoryBarrier_Idx))
    	{
            GL_ENTRY_PREV_TS(glMemoryBarrier_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMemoryBarrier_wrp(barriers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMemoryBarrier_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMemoryBarrier_Idx) ++;

        GL_ENTRY_LAST_TS(glMemoryBarrier_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMemoryBarrier_Idx),
				 GL_ENTRY_LAST_TS(glMemoryBarrier_Idx));
        if(last_diff > 1000000000){
            printf("glMemoryBarrier %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMemoryBarrier_Idx),
	             GL_ENTRY_CALL_TIME(glMemoryBarrier_Idx),
	             GL_ENTRY_CALL_TIME(glMemoryBarrier_Idx) /
	             GL_ENTRY_CALL_COUNT(glMemoryBarrier_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMemoryBarrier_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMemoryBarrier_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMemoryBarrier_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMemoryBarrier_Idx) = get_ts();
        }


	

}