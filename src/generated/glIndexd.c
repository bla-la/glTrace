#include <glTraceCommon.h>
#include <generated.h>

#define glIndexd_wrp						\
    ((void  (*)(GLdouble c                                        \
    ))GL_ENTRY_PTR(glIndexd_Idx))


GLAPI void  APIENTRY glIndexd(GLdouble c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexd_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexd_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexd_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexd_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexd_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexd_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexd_Idx),
				 GL_ENTRY_LAST_TS(glIndexd_Idx));


        if(last_diff > 1000000000){
            printf("glIndexd %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexd_Idx),
	             GL_ENTRY_CALL_TIME(glIndexd_Idx),
	             GL_ENTRY_CALL_TIME(glIndexd_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexd_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexd_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexd_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexd_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexd_Idx) = get_ts();
        }


	

}