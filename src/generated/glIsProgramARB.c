#include <glTraceCommon.h>
#include <generated.h>

#define glIsProgramARB_wrp						\
    ((GLboolean  (*)(GLuint program                                        \
    ))GL_ENTRY_PTR(glIsProgramARB_Idx))


GLAPI GLboolean  APIENTRY glIsProgramARB(GLuint program)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsProgramARB_Idx))
	{
            GL_ENTRY_PTR(glIsProgramARB_Idx) = dlsym(RTLD_NEXT,"glIsProgramARB");
            if(!GL_ENTRY_PTR(glIsProgramARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsProgramARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsProgramARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsProgramARB_wrp(program);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsProgramARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsProgramARB_Idx) ++;

        GL_ENTRY_LAST_TS(glIsProgramARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsProgramARB_Idx),
				 GL_ENTRY_LAST_TS(glIsProgramARB_Idx));
        if(last_diff > 1000000000){
            printf("glIsProgramARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsProgramARB_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgramARB_Idx),
	             GL_ENTRY_CALL_TIME(glIsProgramARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsProgramARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsProgramARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsProgramARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsProgramARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsProgramARB_Idx) = get_ts();
        }


	return retval;

}