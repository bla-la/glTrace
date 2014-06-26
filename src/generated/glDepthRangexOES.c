#include <glTraceCommon.h>
#include <generated.h>

#define glDepthRangexOES_wrp						\
    ((void  (*)(GLfixed n,GLfixed f                                        \
    ))GL_ENTRY_PTR(glDepthRangexOES_Idx))


GLAPI void  APIENTRY glDepthRangexOES(GLfixed n,GLfixed f)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDepthRangexOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthRangexOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthRangexOES_wrp(n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthRangexOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthRangexOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthRangexOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthRangexOES_Idx),
				 GL_ENTRY_LAST_TS(glDepthRangexOES_Idx));


        if(last_diff > 1000000000){
            printf("glDepthRangexOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthRangexOES_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangexOES_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangexOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthRangexOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthRangexOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthRangexOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthRangexOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthRangexOES_Idx) = get_ts();
        }


	

}