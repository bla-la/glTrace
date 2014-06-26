#include <glTraceCommon.h>
#include <generated.h>

#define glEnableClientState_wrp						\
    ((void  (*)(GLenum array                                        \
    ))GL_ENTRY_PTR(glEnableClientState_Idx))


GLAPI void  APIENTRY glEnableClientState(GLenum array)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnableClientState_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnableClientState_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnableClientState_wrp(array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnableClientState_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnableClientState_Idx) ++;

        GL_ENTRY_LAST_TS(glEnableClientState_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnableClientState_Idx),
				 GL_ENTRY_LAST_TS(glEnableClientState_Idx));


        if(last_diff > 1000000000){
            printf("glEnableClientState %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnableClientState_Idx),
	             GL_ENTRY_CALL_TIME(glEnableClientState_Idx),
	             GL_ENTRY_CALL_TIME(glEnableClientState_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnableClientState_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnableClientState_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnableClientState_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnableClientState_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnableClientState_Idx) = get_ts();
        }


	

}