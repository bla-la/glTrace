#include <glTraceCommon.h>
#include <generated.h>

#define glClearDepth_wrp						\
    ((void  (*)(GLdouble depth                                        \
    ))GL_ENTRY_PTR(glClearDepth_Idx))


GLAPI void  APIENTRY glClearDepth(GLdouble depth)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearDepth_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearDepth_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearDepth_wrp(depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearDepth_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearDepth_Idx) ++;

        GL_ENTRY_LAST_TS(glClearDepth_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearDepth_Idx),
				 GL_ENTRY_LAST_TS(glClearDepth_Idx));


        if(last_diff > 1000000000){
            printf("glClearDepth %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearDepth_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepth_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepth_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearDepth_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearDepth_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearDepth_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearDepth_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearDepth_Idx) = get_ts();
        }


	

}