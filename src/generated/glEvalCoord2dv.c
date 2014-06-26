#include <glTraceCommon.h>
#include <generated.h>

#define glEvalCoord2dv_wrp						\
    ((void  (*)(const GLdouble *u                                        \
    ))GL_ENTRY_PTR(glEvalCoord2dv_Idx))


GLAPI void  APIENTRY glEvalCoord2dv(const GLdouble *u)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEvalCoord2dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalCoord2dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalCoord2dv_wrp(u);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalCoord2dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalCoord2dv_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalCoord2dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalCoord2dv_Idx),
				 GL_ENTRY_LAST_TS(glEvalCoord2dv_Idx));


        if(last_diff > 1000000000){
            printf("glEvalCoord2dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalCoord2dv_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord2dv_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord2dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalCoord2dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalCoord2dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalCoord2dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalCoord2dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalCoord2dv_Idx) = get_ts();
        }


	

}