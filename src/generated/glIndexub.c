#include <glTraceCommon.h>
#include <generated.h>

#define glIndexub_wrp						\
    ((void  (*)(GLubyte c                                        \
    ))GL_ENTRY_PTR(glIndexub_Idx))


GLAPI void  APIENTRY glIndexub(GLubyte c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexub_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexub_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexub_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexub_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexub_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexub_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexub_Idx),
				 GL_ENTRY_LAST_TS(glIndexub_Idx));


        if(last_diff > 1000000000){
            printf("glIndexub %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexub_Idx),
	             GL_ENTRY_CALL_TIME(glIndexub_Idx),
	             GL_ENTRY_CALL_TIME(glIndexub_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexub_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexub_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexub_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexub_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexub_Idx) = get_ts();
        }


	

}