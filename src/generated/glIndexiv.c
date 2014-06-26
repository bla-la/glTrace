#include <glTraceCommon.h>
#include <generated.h>

#define glIndexiv_wrp						\
    ((void  (*)(const GLint *c                                        \
    ))GL_ENTRY_PTR(glIndexiv_Idx))


GLAPI void  APIENTRY glIndexiv(const GLint *c)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexiv_wrp(c);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexiv_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexiv_Idx),
				 GL_ENTRY_LAST_TS(glIndexiv_Idx));


        if(last_diff > 1000000000){
            printf("glIndexiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexiv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexiv_Idx),
	             GL_ENTRY_CALL_TIME(glIndexiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexiv_Idx) = get_ts();
        }


	

}