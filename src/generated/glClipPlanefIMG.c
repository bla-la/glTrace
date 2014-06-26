#include <glTraceCommon.h>
#include <generated.h>

#define glClipPlanefIMG_wrp						\
    ((void  (*)(GLenum p,const GLfloat *eqn                                        \
    ))GL_ENTRY_PTR(glClipPlanefIMG_Idx))


GLAPI void  APIENTRY glClipPlanefIMG(GLenum p,const GLfloat *eqn)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glClipPlanefIMG_Idx))
    	{
            GL_ENTRY_PREV_TS(glClipPlanefIMG_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClipPlanefIMG_wrp(p,eqn);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClipPlanefIMG_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClipPlanefIMG_Idx) ++;

        GL_ENTRY_LAST_TS(glClipPlanefIMG_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClipPlanefIMG_Idx),
				 GL_ENTRY_LAST_TS(glClipPlanefIMG_Idx));


        if(last_diff > 1000000000){
            printf("glClipPlanefIMG %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClipPlanefIMG_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanefIMG_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanefIMG_Idx) /
	             GL_ENTRY_CALL_COUNT(glClipPlanefIMG_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClipPlanefIMG_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClipPlanefIMG_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClipPlanefIMG_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClipPlanefIMG_Idx) = get_ts();
        }


	

}