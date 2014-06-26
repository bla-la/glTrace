#include <glTraceCommon.h>
#include <generated.h>

#define glEnable_wrp						\
    ((void  (*)(GLenum cap                                        \
    ))GL_ENTRY_PTR(glEnable_Idx))


GLAPI void  APIENTRY glEnable(GLenum cap)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEnable_Idx))
    	{
            GL_ENTRY_PREV_TS(glEnable_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEnable_wrp(cap);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEnable_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEnable_Idx) ++;

        GL_ENTRY_LAST_TS(glEnable_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEnable_Idx),
				 GL_ENTRY_LAST_TS(glEnable_Idx));


        if(last_diff > 1000000000){
            printf("glEnable %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEnable_Idx),
	             GL_ENTRY_CALL_TIME(glEnable_Idx),
	             GL_ENTRY_CALL_TIME(glEnable_Idx) /
	             GL_ENTRY_CALL_COUNT(glEnable_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEnable_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEnable_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEnable_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEnable_Idx) = get_ts();
        }


	

}