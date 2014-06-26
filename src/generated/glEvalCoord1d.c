#include <glTraceCommon.h>
#include <generated.h>

#define glEvalCoord1d_wrp						\
    ((void  (*)(GLdouble u                                        \
    ))GL_ENTRY_PTR(glEvalCoord1d_Idx))


GLAPI void  APIENTRY glEvalCoord1d(GLdouble u)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEvalCoord1d_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalCoord1d_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalCoord1d_wrp(u);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalCoord1d_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalCoord1d_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalCoord1d_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalCoord1d_Idx),
				 GL_ENTRY_LAST_TS(glEvalCoord1d_Idx));


        if(last_diff > 1000000000){
            printf("glEvalCoord1d %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalCoord1d_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord1d_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord1d_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalCoord1d_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalCoord1d_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalCoord1d_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalCoord1d_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalCoord1d_Idx) = get_ts();
        }


	

}