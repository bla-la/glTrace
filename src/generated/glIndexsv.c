#include <glTraceCommon.h>
#include <generated.h>

#define glIndexsv_wrp						\
    ((void  (*)(const GLshort *c                                        \
    ))GL_ENTRY_PTR(glIndexsv_Idx))


GLAPI void  APIENTRY glIndexsv(const GLshort *c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexsv_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexsv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexsv_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexsv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexsv_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexsv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexsv_Idx),
				 GL_ENTRY_LAST_TS(glIndexsv_Idx));


        if(last_diff > 1000000000){
            printf("glIndexsv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexsv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexsv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexsv_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexsv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexsv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexsv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexsv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexsv_Idx) = get_ts();
        }


	

}