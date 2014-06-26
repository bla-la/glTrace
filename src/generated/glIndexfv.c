#include <glTraceCommon.h>
#include <generated.h>

#define glIndexfv_wrp						\
    ((void  (*)(const GLfloat *c                                        \
    ))GL_ENTRY_PTR(glIndexfv_Idx))


GLAPI void  APIENTRY glIndexfv(const GLfloat *c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexfv_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexfv_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexfv_Idx),
				 GL_ENTRY_LAST_TS(glIndexfv_Idx));


        if(last_diff > 1000000000){
            printf("glIndexfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexfv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexfv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexfv_Idx) = get_ts();
        }


	

}