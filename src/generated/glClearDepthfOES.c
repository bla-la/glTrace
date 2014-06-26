#include <glTraceCommon.h>
#include <generated.h>

#define glClearDepthfOES_wrp						\
    ((void  (*)(GLclampf depth                                        \
    ))GL_ENTRY_PTR(glClearDepthfOES_Idx))


GLAPI void  APIENTRY glClearDepthfOES(GLclampf depth)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearDepthfOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearDepthfOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearDepthfOES_wrp(depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearDepthfOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearDepthfOES_Idx) ++;

        GL_ENTRY_LAST_TS(glClearDepthfOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearDepthfOES_Idx),
				 GL_ENTRY_LAST_TS(glClearDepthfOES_Idx));


        if(last_diff > 1000000000){
            printf("glClearDepthfOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearDepthfOES_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthfOES_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthfOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearDepthfOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearDepthfOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearDepthfOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearDepthfOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearDepthfOES_Idx) = get_ts();
        }


	

}