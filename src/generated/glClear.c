#include <glTraceCommon.h>
#include <generated.h>

#define glClear_wrp						\
    ((void  (*)(GLbitfield mask                                        \
    ))GL_ENTRY_PTR(glClear_Idx))


GLAPI void  APIENTRY glClear(GLbitfield mask)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClear_Idx))
    	{
            GL_ENTRY_PREV_TS(glClear_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClear_wrp(mask);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClear_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClear_Idx) ++;

        GL_ENTRY_LAST_TS(glClear_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClear_Idx),
				 GL_ENTRY_LAST_TS(glClear_Idx));


        if(last_diff > 1000000000){
            printf("glClear %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClear_Idx),
	             GL_ENTRY_CALL_TIME(glClear_Idx),
	             GL_ENTRY_CALL_TIME(glClear_Idx) /
	             GL_ENTRY_CALL_COUNT(glClear_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClear_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClear_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClear_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClear_Idx) = get_ts();
        }


	

}