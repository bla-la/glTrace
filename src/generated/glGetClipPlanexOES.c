#include <glTraceCommon.h>
#include <generated.h>

#define glGetClipPlanexOES_wrp						\
    ((void  (*)(GLenum plane,GLfixed *equation                                        \
    ))GL_ENTRY_PTR(glGetClipPlanexOES_Idx))


GLAPI void  APIENTRY glGetClipPlanexOES(GLenum plane,GLfixed *equation)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetClipPlanexOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetClipPlanexOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetClipPlanexOES_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetClipPlanexOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetClipPlanexOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetClipPlanexOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetClipPlanexOES_Idx),
				 GL_ENTRY_LAST_TS(glGetClipPlanexOES_Idx));


        if(last_diff > 1000000000){
            printf("glGetClipPlanexOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetClipPlanexOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlanexOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlanexOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetClipPlanexOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetClipPlanexOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetClipPlanexOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetClipPlanexOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetClipPlanexOES_Idx) = get_ts();
        }


	

}