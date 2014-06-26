#include <glTraceCommon.h>
#include <generated.h>

#define glClipPlanef_wrp						\
    ((void  (*)(GLenum p,const GLfloat *eqn                                        \
    ))GL_ENTRY_PTR(glClipPlanef_Idx))


GLAPI void  APIENTRY glClipPlanef(GLenum p,const GLfloat *eqn)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClipPlanef_Idx))
    	{
            GL_ENTRY_PREV_TS(glClipPlanef_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClipPlanef_wrp(p,eqn);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClipPlanef_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClipPlanef_Idx) ++;

        GL_ENTRY_LAST_TS(glClipPlanef_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClipPlanef_Idx),
				 GL_ENTRY_LAST_TS(glClipPlanef_Idx));


        if(last_diff > 1000000000){
            printf("glClipPlanef %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClipPlanef_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanef_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanef_Idx) /
	             GL_ENTRY_CALL_COUNT(glClipPlanef_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClipPlanef_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClipPlanef_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClipPlanef_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClipPlanef_Idx) = get_ts();
        }


	

}