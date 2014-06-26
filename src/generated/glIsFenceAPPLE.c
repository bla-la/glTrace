#include <glTraceCommon.h>
#include <generated.h>

#define glIsFenceAPPLE_wrp						\
    ((GLboolean  (*)(GLuint fence                                        \
    ))GL_ENTRY_PTR(glIsFenceAPPLE_Idx))


GLAPI GLboolean  APIENTRY glIsFenceAPPLE(GLuint fence)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsFenceAPPLE_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsFenceAPPLE_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsFenceAPPLE_wrp(fence);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsFenceAPPLE_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsFenceAPPLE_Idx) ++;

        GL_ENTRY_LAST_TS(glIsFenceAPPLE_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsFenceAPPLE_Idx),
				 GL_ENTRY_LAST_TS(glIsFenceAPPLE_Idx));


        if(last_diff > 1000000000){
            printf("glIsFenceAPPLE %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsFenceAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glIsFenceAPPLE_Idx),
	             GL_ENTRY_CALL_TIME(glIsFenceAPPLE_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsFenceAPPLE_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsFenceAPPLE_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsFenceAPPLE_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsFenceAPPLE_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsFenceAPPLE_Idx) = get_ts();
        }


	return retval;

}