#include <glTraceCommon.h>
#include <generated.h>

#define glClipPlanexIMG_wrp						\
    ((void  (*)(GLenum p,const GLfixed *eqn                                        \
    ))GL_ENTRY_PTR(glClipPlanexIMG_Idx))


GLAPI void  APIENTRY glClipPlanexIMG(GLenum p,const GLfixed *eqn)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClipPlanexIMG_Idx))
    	{
            GL_ENTRY_PREV_TS(glClipPlanexIMG_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClipPlanexIMG_wrp(p,eqn);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClipPlanexIMG_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClipPlanexIMG_Idx) ++;

        GL_ENTRY_LAST_TS(glClipPlanexIMG_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClipPlanexIMG_Idx),
				 GL_ENTRY_LAST_TS(glClipPlanexIMG_Idx));


        if(last_diff > 1000000000){
            printf("glClipPlanexIMG %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClipPlanexIMG_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanexIMG_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanexIMG_Idx) /
	             GL_ENTRY_CALL_COUNT(glClipPlanexIMG_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClipPlanexIMG_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClipPlanexIMG_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClipPlanexIMG_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClipPlanexIMG_Idx) = get_ts();
        }


	

}