#include <glTraceCommon.h>
#include <generated.h>

#define glIndexs_wrp						\
    ((void  (*)(GLshort c                                        \
    ))GL_ENTRY_PTR(glIndexs_Idx))


GLAPI void  APIENTRY glIndexs(GLshort c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexs_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexs_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexs_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexs_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexs_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexs_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexs_Idx),
				 GL_ENTRY_LAST_TS(glIndexs_Idx));


        if(last_diff > 1000000000){
            printf("glIndexs %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexs_Idx),
	             GL_ENTRY_CALL_TIME(glIndexs_Idx),
	             GL_ENTRY_CALL_TIME(glIndexs_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexs_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexs_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexs_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexs_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexs_Idx) = get_ts();
        }


	

}