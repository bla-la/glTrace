#include <glTraceCommon.h>
#include <generated.h>

#define glGetClipPlanex_wrp						\
    ((void  (*)(GLenum plane,GLfixed *equation                                        \
    ))GL_ENTRY_PTR(glGetClipPlanex_Idx))


GLAPI void  APIENTRY glGetClipPlanex(GLenum plane,GLfixed *equation)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetClipPlanex_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetClipPlanex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetClipPlanex_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetClipPlanex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetClipPlanex_Idx) ++;

        GL_ENTRY_LAST_TS(glGetClipPlanex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetClipPlanex_Idx),
				 GL_ENTRY_LAST_TS(glGetClipPlanex_Idx));


        if(last_diff > 1000000000){
            printf("glGetClipPlanex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetClipPlanex_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlanex_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlanex_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetClipPlanex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetClipPlanex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetClipPlanex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetClipPlanex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetClipPlanex_Idx) = get_ts();
        }


	

}