#include <glTraceCommon.h>
#include <generated.h>

#define glRects_wrp						\
    ((void  (*)(GLshort x1,GLshort y1,GLshort x2,GLshort y2                                        \
    ))GL_ENTRY_PTR(glRects_Idx))


GLAPI void  APIENTRY glRects(GLshort x1,GLshort y1,GLshort x2,GLshort y2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRects_Idx))
    	{
            GL_ENTRY_PREV_TS(glRects_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRects_wrp(x1,y1,x2,y2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRects_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRects_Idx) ++;

        GL_ENTRY_LAST_TS(glRects_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRects_Idx),
				 GL_ENTRY_LAST_TS(glRects_Idx));


        if(last_diff > 1000000000){
            printf("glRects %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRects_Idx),
	             GL_ENTRY_CALL_TIME(glRects_Idx),
	             GL_ENTRY_CALL_TIME(glRects_Idx) /
	             GL_ENTRY_CALL_COUNT(glRects_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRects_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRects_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRects_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRects_Idx) = get_ts();
        }


	

}