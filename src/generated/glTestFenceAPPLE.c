#include <glTraceCommon.h>
#include <generated.h>

#define glTestFenceAPPLE_wrp						\
    ((GLboolean  (*)(GLuint fence                                        \
    ))GL_ENTRY_PTR(glTestFenceAPPLE_Idx))


GLAPI GLboolean  APIENTRY glTestFenceAPPLE(GLuint fence)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTestFenceAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glTestFenceAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glTestFenceAPPLE_wrp(fence);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTestFenceAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTestFenceAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glTestFenceAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTestFenceAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glTestFenceAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glTestFenceAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTestFenceAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glTestFenceAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glTestFenceAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glTestFenceAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTestFenceAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTestFenceAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTestFenceAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTestFenceAPPLE_Idx) = get_ts();
        }


	return retval;

}