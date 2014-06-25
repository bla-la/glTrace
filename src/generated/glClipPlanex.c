#include <glTraceCommon.h>
#include <generated.h>

#define glClipPlanex_wrp						\
    ((void  (*)(GLenum plane,const GLfixed *equation                                        \
    ))GL_ENTRY_PTR(glClipPlanex_Idx))


GLAPI void  APIENTRY glClipPlanex(GLenum plane,const GLfixed *equation)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glClipPlanex_Idx))
	{
            GL_ENTRY_PTR(glClipPlanex_Idx) = dlsym(RTLD_NEXT,"glClipPlanex");
            if(!GL_ENTRY_PTR(glClipPlanex_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glClipPlanex_Idx))
    	{
            GL_ENTRY_PREV_TS(glClipPlanex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glClipPlanex_wrp(plane,equation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glClipPlanex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glClipPlanex_Idx) ++;

        GL_ENTRY_LAST_TS(glClipPlanex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glClipPlanex_Idx),
				 GL_ENTRY_LAST_TS(glClipPlanex_Idx));
        if(last_diff > 1000000000){
            printf("glClipPlanex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glClipPlanex_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanex_Idx),
	             GL_ENTRY_CALL_TIME(glClipPlanex_Idx) /
	             GL_ENTRY_CALL_COUNT(glClipPlanex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glClipPlanex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glClipPlanex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glClipPlanex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glClipPlanex_Idx) = get_ts();
        }


	

}