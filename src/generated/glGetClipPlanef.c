#include <glTraceCommon.h>
#include <generated.h>

#define glGetClipPlanef_wrp						\
    ((void  (*)(GLenum plane,GLfloat *equation                                        \
    ))GL_ENTRY_PTR(glGetClipPlanef_Idx))


GLAPI void  APIENTRY glGetClipPlanef(GLenum plane,GLfloat *equation)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetClipPlanef_Idx))
	{
            GL_ENTRY_PTR(glGetClipPlanef_Idx) = dlsym(RTLD_NEXT,"glGetClipPlanef");
            if(!GL_ENTRY_PTR(glGetClipPlanef_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetClipPlanef_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetClipPlanef_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetClipPlanef_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetClipPlanef_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetClipPlanef_Idx) ++;

        GL_ENTRY_LAST_TS(glGetClipPlanef_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetClipPlanef_Idx),
				 GL_ENTRY_LAST_TS(glGetClipPlanef_Idx));
        if(last_diff > 1000000000){
            printf("glGetClipPlanef %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetClipPlanef_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlanef_Idx),
	             GL_ENTRY_CALL_TIME(glGetClipPlanef_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetClipPlanef_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetClipPlanef_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetClipPlanef_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetClipPlanef_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetClipPlanef_Idx) = get_ts();
        }


	

}