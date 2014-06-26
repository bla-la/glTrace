#include <glTraceCommon.h>
#include <generated.h>

#define glDepthRangef_wrp						\
    ((void  (*)(GLfloat n,GLfloat f                                        \
    ))GL_ENTRY_PTR(glDepthRangef_Idx))


GLAPI void  APIENTRY glDepthRangef(GLfloat n,GLfloat f)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDepthRangef_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthRangef_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthRangef_wrp(n,f);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthRangef_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthRangef_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthRangef_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthRangef_Idx),
				 GL_ENTRY_LAST_TS(glDepthRangef_Idx));


        if(last_diff > 1000000000){
            printf("glDepthRangef %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthRangef_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangef_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangef_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthRangef_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthRangef_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthRangef_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthRangef_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthRangef_Idx) = get_ts();
        }


	

}