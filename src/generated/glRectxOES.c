#include <glTraceCommon.h>
#include <generated.h>

#define glRectxOES_wrp						\
    ((void  (*)(GLfixed x1,GLfixed y1,GLfixed x2,GLfixed y2                                        \
    ))GL_ENTRY_PTR(glRectxOES_Idx))


GLAPI void  APIENTRY glRectxOES(GLfixed x1,GLfixed y1,GLfixed x2,GLfixed y2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRectxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glRectxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRectxOES_wrp(x1,y1,x2,y2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRectxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRectxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glRectxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRectxOES_Idx),
				 GL_ENTRY_LAST_TS(glRectxOES_Idx));


        if(last_diff > 1000000000){
            printf("glRectxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRectxOES_Idx),
	             GL_ENTRY_CALL_TIME(glRectxOES_Idx),
	             GL_ENTRY_CALL_TIME(glRectxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glRectxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRectxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRectxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRectxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRectxOES_Idx) = get_ts();
        }


	

}