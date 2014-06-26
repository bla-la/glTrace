#include <glTraceCommon.h>
#include <generated.h>

#define glDrawElementsInstancedARB_wrp						\
    ((void  (*)(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount                                        \
    ))GL_ENTRY_PTR(glDrawElementsInstancedARB_Idx))


GLAPI void  APIENTRY glDrawElementsInstancedARB(GLenum mode,GLsizei count,GLenum type,const void *indices,GLsizei primcount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawElementsInstancedARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawElementsInstancedARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawElementsInstancedARB_wrp(mode,count,type,indices,primcount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawElementsInstancedARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawElementsInstancedARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawElementsInstancedARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawElementsInstancedARB_Idx),
				 GL_ENTRY_LAST_TS(glDrawElementsInstancedARB_Idx));


        if(last_diff > 1000000000){
            printf("glDrawElementsInstancedARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedARB_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedARB_Idx),
	             GL_ENTRY_CALL_TIME(glDrawElementsInstancedARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawElementsInstancedARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawElementsInstancedARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawElementsInstancedARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawElementsInstancedARB_Idx) = get_ts();
        }


	

}