#include <glTraceCommon.h>
#include <generated.h>

#define glLineWidth_wrp						\
    ((void  (*)(GLfloat width                                        \
    ))GL_ENTRY_PTR(glLineWidth_Idx))


GLAPI void  APIENTRY glLineWidth(GLfloat width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLineWidth_Idx))
    	{
            GL_ENTRY_PREV_TS(glLineWidth_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLineWidth_wrp(width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLineWidth_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLineWidth_Idx) ++;

        GL_ENTRY_LAST_TS(glLineWidth_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLineWidth_Idx),
				 GL_ENTRY_LAST_TS(glLineWidth_Idx));


        if(last_diff > 1000000000){
            printf("glLineWidth %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLineWidth_Idx),
	             GL_ENTRY_CALL_TIME(glLineWidth_Idx),
	             GL_ENTRY_CALL_TIME(glLineWidth_Idx) /
	             GL_ENTRY_CALL_COUNT(glLineWidth_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLineWidth_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLineWidth_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLineWidth_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLineWidth_Idx) = get_ts();
        }


	

}