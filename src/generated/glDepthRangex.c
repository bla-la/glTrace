#include <glTraceCommon.h>
#include <generated.h>

#define glDepthRangex_wrp						\
    ((void  (*)(GLfixed n,GLfixed f                                        \
    ))GL_ENTRY_PTR(glDepthRangex_Idx))


GLAPI void  APIENTRY glDepthRangex(GLfixed n,GLfixed f)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDepthRangex_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthRangex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthRangex_wrp(n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthRangex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthRangex_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthRangex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthRangex_Idx),
				 GL_ENTRY_LAST_TS(glDepthRangex_Idx));


        if(last_diff > 1000000000){
            printf("glDepthRangex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthRangex_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangex_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangex_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthRangex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthRangex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthRangex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthRangex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthRangex_Idx) = get_ts();
        }


	

}