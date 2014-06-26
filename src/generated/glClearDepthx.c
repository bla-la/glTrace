#include <glTraceCommon.h>
#include <generated.h>

#define glClearDepthx_wrp						\
    ((void  (*)(GLfixed depth                                        \
    ))GL_ENTRY_PTR(glClearDepthx_Idx))


GLAPI void  APIENTRY glClearDepthx(GLfixed depth)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClearDepthx_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearDepthx_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearDepthx_wrp(depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearDepthx_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearDepthx_Idx) ++;

        GL_ENTRY_LAST_TS(glClearDepthx_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearDepthx_Idx),
				 GL_ENTRY_LAST_TS(glClearDepthx_Idx));


        if(last_diff > 1000000000){
            printf("glClearDepthx %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearDepthx_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthx_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthx_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearDepthx_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearDepthx_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearDepthx_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearDepthx_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearDepthx_Idx) = get_ts();
        }


	

}