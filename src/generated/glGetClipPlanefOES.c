#include <glTraceCommon.h>
#include <generated.h>

#define glGetClipPlanefOES_wrp						\
    ((void  (*)(GLenum plane,GLfloat *equation                                        \
    ))GL_ENTRY_PTR(glGetClipPlanefOES_Idx))


GLAPI void  APIENTRY glGetClipPlanefOES(GLenum plane,GLfloat *equation)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetClipPlanefOES_Idx))
	{
            GL_ENTRY_PTR(glGetClipPlanefOES_Idx) = dlsym(RTLD_NEXT,"glGetClipPlanefOES");
            if(!GL_ENTRY_PTR(glGetClipPlanefOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetClipPlanefOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetClipPlanefOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetClipPlanefOES_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetClipPlanefOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetClipPlanefOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetClipPlanefOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetClipPlanefOES_Idx),
				 GL_ENTRY_LAST_TS(glGetClipPlanefOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetClipPlanefOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetClipPlanefOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlanefOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlanefOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetClipPlanefOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetClipPlanefOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetClipPlanefOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetClipPlanefOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetClipPlanefOES_Idx) = get_ts();
        }


	

}