#include <glTraceCommon.h>
#include <generated.h>

#define glClipPlanexOES_wrp						\
    ((void  (*)(GLenum plane,const GLfixed *equation                                        \
    ))GL_ENTRY_PTR(glClipPlanexOES_Idx))


GLAPI void  APIENTRY glClipPlanexOES(GLenum plane,const GLfixed *equation)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClipPlanexOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glClipPlanexOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClipPlanexOES_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClipPlanexOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClipPlanexOES_Idx) ++;

        GL_ENTRY_LAST_TS(glClipPlanexOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClipPlanexOES_Idx),
				 GL_ENTRY_LAST_TS(glClipPlanexOES_Idx));


        if(last_diff > 1000000000){
            printf("glClipPlanexOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClipPlanexOES_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanexOES_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanexOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glClipPlanexOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClipPlanexOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClipPlanexOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClipPlanexOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClipPlanexOES_Idx) = get_ts();
        }


	

}