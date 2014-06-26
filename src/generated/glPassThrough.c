#include <glTraceCommon.h>
#include <generated.h>

#define glPassThrough_wrp						\
    ((void  (*)(GLfloat token                                        \
    ))GL_ENTRY_PTR(glPassThrough_Idx))


GLAPI void  APIENTRY glPassThrough(GLfloat token)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPassThrough_Idx))
    	{
            GL_ENTRY_PREV_TS(glPassThrough_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPassThrough_wrp(token);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPassThrough_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPassThrough_Idx) ++;

        GL_ENTRY_LAST_TS(glPassThrough_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPassThrough_Idx),
				 GL_ENTRY_LAST_TS(glPassThrough_Idx));


        if(last_diff > 1000000000){
            printf("glPassThrough %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPassThrough_Idx),
	             GL_ENTRY_CALL_TIME(glPassThrough_Idx),
	             GL_ENTRY_CALL_TIME(glPassThrough_Idx) /
	             GL_ENTRY_CALL_COUNT(glPassThrough_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPassThrough_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPassThrough_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPassThrough_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPassThrough_Idx) = get_ts();
        }


	

}