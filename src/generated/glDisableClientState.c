#include <glTraceCommon.h>
#include <generated.h>

#define glDisableClientState_wrp						\
    ((void  (*)(GLenum array                                        \
    ))GL_ENTRY_PTR(glDisableClientState_Idx))


GLAPI void  APIENTRY glDisableClientState(GLenum array)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDisableClientState_Idx))
	{
            GL_ENTRY_PTR(glDisableClientState_Idx) = dlsym(RTLD_NEXT,"glDisableClientState");
            if(!GL_ENTRY_PTR(glDisableClientState_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDisableClientState_Idx))
    	{
            GL_ENTRY_PREV_TS(glDisableClientState_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDisableClientState_wrp(array);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDisableClientState_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDisableClientState_Idx) ++;

        GL_ENTRY_LAST_TS(glDisableClientState_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDisableClientState_Idx),
				 GL_ENTRY_LAST_TS(glDisableClientState_Idx));
        if(last_diff > 1000000000){
            printf("glDisableClientState %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDisableClientState_Idx),
	             GL_ENTRY_CALL_TIME(glDisableClientState_Idx),
	             GL_ENTRY_CALL_TIME(glDisableClientState_Idx) /
	             GL_ENTRY_CALL_COUNT(glDisableClientState_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDisableClientState_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDisableClientState_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDisableClientState_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDisableClientState_Idx) = get_ts();
        }


	

}