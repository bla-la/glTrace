#include <glTraceCommon.h>
#include <generated.h>

#define glRectd_wrp						\
    ((void  (*)(GLdouble x1,GLdouble y1,GLdouble x2,GLdouble y2                                        \
    ))GL_ENTRY_PTR(glRectd_Idx))


GLAPI void  APIENTRY glRectd(GLdouble x1,GLdouble y1,GLdouble x2,GLdouble y2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRectd_Idx))
    	{
            GL_ENTRY_PREV_TS(glRectd_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRectd_wrp(x1,y1,x2,y2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRectd_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRectd_Idx) ++;

        GL_ENTRY_LAST_TS(glRectd_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRectd_Idx),
				 GL_ENTRY_LAST_TS(glRectd_Idx));


        if(last_diff > 1000000000){
            printf("glRectd %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRectd_Idx),
	             GL_ENTRY_CALL_TIME(glRectd_Idx),
	             GL_ENTRY_CALL_TIME(glRectd_Idx) /
	             GL_ENTRY_CALL_COUNT(glRectd_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRectd_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRectd_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRectd_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRectd_Idx) = get_ts();
        }


	

}