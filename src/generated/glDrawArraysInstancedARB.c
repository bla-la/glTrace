#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArraysInstancedARB_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glDrawArraysInstancedARB_Idx))


GLAPI void  APIENTRY glDrawArraysInstancedARB(GLenum mode,GLint first,GLsizei count,GLsizei primcount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawArraysInstancedARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArraysInstancedARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArraysInstancedARB_wrp(mode,first,count,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArraysInstancedARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArraysInstancedARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArraysInstancedARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArraysInstancedARB_Idx),
				 GL_ENTRY_LAST_TS(glDrawArraysInstancedARB_Idx));


        if(last_diff > 1000000000){
            printf("glDrawArraysInstancedARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedARB_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedARB_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArraysInstancedARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArraysInstancedARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArraysInstancedARB_Idx) = get_ts();
        }


	

}