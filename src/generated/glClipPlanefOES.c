#include <glTraceCommon.h>
#include <generated.h>

#define glClipPlanefOES_wrp						\
    ((void  (*)(GLenum plane,const GLfloat *equation                                        \
    ))GL_ENTRY_PTR(glClipPlanefOES_Idx))


GLAPI void  APIENTRY glClipPlanefOES(GLenum plane,const GLfloat *equation)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClipPlanefOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glClipPlanefOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClipPlanefOES_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClipPlanefOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClipPlanefOES_Idx) ++;

        GL_ENTRY_LAST_TS(glClipPlanefOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClipPlanefOES_Idx),
				 GL_ENTRY_LAST_TS(glClipPlanefOES_Idx));


        if(last_diff > 1000000000){
            printf("glClipPlanefOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClipPlanefOES_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanefOES_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanefOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glClipPlanefOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClipPlanefOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClipPlanefOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClipPlanefOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClipPlanefOES_Idx) = get_ts();
        }


	

}