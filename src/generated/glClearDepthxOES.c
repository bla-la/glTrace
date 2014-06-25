#include <glTraceCommon.h>
#include <generated.h>

#define glClearDepthxOES_wrp						\
    ((void  (*)(GLfixed depth                                        \
    ))GL_ENTRY_PTR(glClearDepthxOES_Idx))


GLAPI void  APIENTRY glClearDepthxOES(GLfixed depth)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClearDepthxOES_Idx))
	{
            GL_ENTRY_PTR(glClearDepthxOES_Idx) = dlsym(RTLD_NEXT,"glClearDepthxOES");
            if(!GL_ENTRY_PTR(glClearDepthxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClearDepthxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glClearDepthxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClearDepthxOES_wrp(depth);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClearDepthxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClearDepthxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glClearDepthxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClearDepthxOES_Idx),
				 GL_ENTRY_LAST_TS(glClearDepthxOES_Idx));
        if(last_diff > 1000000000){
            printf("glClearDepthxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClearDepthxOES_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthxOES_Idx),
	             GL_ENTRY_CALL_TIME(glClearDepthxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glClearDepthxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClearDepthxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClearDepthxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClearDepthxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClearDepthxOES_Idx) = get_ts();
        }


	

}