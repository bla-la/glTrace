#include <glTraceCommon.h>
#include <generated.h>

#define glIsSync_wrp						\
    ((GLboolean  (*)(GLsync sync                                        \
    ))GL_ENTRY_PTR(glIsSync_Idx))


GLAPI GLboolean  APIENTRY glIsSync(GLsync sync)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsSync_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsSync_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsSync_wrp(sync);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsSync_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsSync_Idx) ++;

        GL_ENTRY_LAST_TS(glIsSync_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsSync_Idx),
				 GL_ENTRY_LAST_TS(glIsSync_Idx));


        if(last_diff > 1000000000){
            printf("glIsSync %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsSync_Idx),
	             GL_ENTRY_CALL_TIME(glIsSync_Idx),
	             GL_ENTRY_CALL_TIME(glIsSync_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsSync_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsSync_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsSync_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsSync_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsSync_Idx) = get_ts();
        }


	return retval;

}