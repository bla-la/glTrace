#include <glTraceCommon.h>
#include <generated.h>

#define glEvalCoord1f_wrp						\
    ((void  (*)(GLfloat u                                        \
    ))GL_ENTRY_PTR(glEvalCoord1f_Idx))


GLAPI void  APIENTRY glEvalCoord1f(GLfloat u)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEvalCoord1f_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalCoord1f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalCoord1f_wrp(u);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalCoord1f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalCoord1f_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalCoord1f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalCoord1f_Idx),
				 GL_ENTRY_LAST_TS(glEvalCoord1f_Idx));


        if(last_diff > 1000000000){
            printf("glEvalCoord1f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalCoord1f_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord1f_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord1f_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalCoord1f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalCoord1f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalCoord1f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalCoord1f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalCoord1f_Idx) = get_ts();
        }


	

}