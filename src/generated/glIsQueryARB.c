#include <glTraceCommon.h>
#include <generated.h>

#define glIsQueryARB_wrp						\
    ((GLboolean  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glIsQueryARB_Idx))


GLAPI GLboolean  APIENTRY glIsQueryARB(GLuint id)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsQueryARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsQueryARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsQueryARB_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsQueryARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsQueryARB_Idx) ++;

        GL_ENTRY_LAST_TS(glIsQueryARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsQueryARB_Idx),
				 GL_ENTRY_LAST_TS(glIsQueryARB_Idx));


        if(last_diff > 1000000000){
            printf("glIsQueryARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsQueryARB_Idx),
	             GL_ENTRY_CALL_TIME(glIsQueryARB_Idx),
	             GL_ENTRY_CALL_TIME(glIsQueryARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsQueryARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsQueryARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsQueryARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsQueryARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsQueryARB_Idx) = get_ts();
        }


	return retval;

}