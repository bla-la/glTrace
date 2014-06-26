#include <glTraceCommon.h>
#include <generated.h>

#define glFinishFenceAPPLE_wrp						\
    ((void  (*)(GLuint fence                                        \
    ))GL_ENTRY_PTR(glFinishFenceAPPLE_Idx))


GLAPI void  APIENTRY glFinishFenceAPPLE(GLuint fence)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFinishFenceAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glFinishFenceAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFinishFenceAPPLE_wrp(fence);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFinishFenceAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFinishFenceAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glFinishFenceAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFinishFenceAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glFinishFenceAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glFinishFenceAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFinishFenceAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFinishFenceAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glFinishFenceAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glFinishFenceAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFinishFenceAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFinishFenceAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFinishFenceAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFinishFenceAPPLE_Idx) = get_ts();
        }


	

}