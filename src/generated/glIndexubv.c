#include <glTraceCommon.h>
#include <generated.h>

#define glIndexubv_wrp						\
    ((void  (*)(const GLubyte *c                                        \
    ))GL_ENTRY_PTR(glIndexubv_Idx))


GLAPI void  APIENTRY glIndexubv(const GLubyte *c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexubv_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexubv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexubv_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexubv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexubv_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexubv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexubv_Idx),
				 GL_ENTRY_LAST_TS(glIndexubv_Idx));


        if(last_diff > 1000000000){
            printf("glIndexubv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexubv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexubv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexubv_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexubv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexubv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexubv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexubv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexubv_Idx) = get_ts();
        }


	

}