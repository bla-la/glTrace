#include <glTraceCommon.h>
#include <generated.h>

#define glRasterPos4iv_wrp						\
    ((void  (*)(const GLint *v                                        \
    ))GL_ENTRY_PTR(glRasterPos4iv_Idx))


GLAPI void  APIENTRY glRasterPos4iv(const GLint *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glRasterPos4iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glRasterPos4iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glRasterPos4iv_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glRasterPos4iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glRasterPos4iv_Idx) ++;

        GL_ENTRY_LAST_TS(glRasterPos4iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glRasterPos4iv_Idx),
				 GL_ENTRY_LAST_TS(glRasterPos4iv_Idx));


        if(last_diff > 1000000000){
            printf("glRasterPos4iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glRasterPos4iv_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4iv_Idx),
	             GL_ENTRY_CALL_TIME(glRasterPos4iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glRasterPos4iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glRasterPos4iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glRasterPos4iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glRasterPos4iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glRasterPos4iv_Idx) = get_ts();
        }


	

}