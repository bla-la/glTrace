#include <glTraceCommon.h>
#include <generated.h>

#define glEvalPoint2_wrp						\
    ((void  (*)(GLint i,GLint j                                        \
    ))GL_ENTRY_PTR(glEvalPoint2_Idx))


GLAPI void  APIENTRY glEvalPoint2(GLint i,GLint j)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEvalPoint2_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalPoint2_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalPoint2_wrp(i,j);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalPoint2_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalPoint2_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalPoint2_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalPoint2_Idx),
				 GL_ENTRY_LAST_TS(glEvalPoint2_Idx));


        if(last_diff > 1000000000){
            printf("glEvalPoint2 %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalPoint2_Idx),
	             GL_ENTRY_CALL_TIME(glEvalPoint2_Idx),
	             GL_ENTRY_CALL_TIME(glEvalPoint2_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalPoint2_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalPoint2_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalPoint2_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalPoint2_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalPoint2_Idx) = get_ts();
        }


	

}