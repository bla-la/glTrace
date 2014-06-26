#include <glTraceCommon.h>
#include <generated.h>

#define glLineWidthxOES_wrp						\
    ((void  (*)(GLfixed width                                        \
    ))GL_ENTRY_PTR(glLineWidthxOES_Idx))


GLAPI void  APIENTRY glLineWidthxOES(GLfixed width)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLineWidthxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glLineWidthxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLineWidthxOES_wrp(width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLineWidthxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLineWidthxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glLineWidthxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLineWidthxOES_Idx),
				 GL_ENTRY_LAST_TS(glLineWidthxOES_Idx));


        if(last_diff > 1000000000){
            printf("glLineWidthxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLineWidthxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLineWidthxOES_Idx),
	             GL_ENTRY_CALL_TIME(glLineWidthxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glLineWidthxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLineWidthxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLineWidthxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLineWidthxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLineWidthxOES_Idx) = get_ts();
        }


	

}