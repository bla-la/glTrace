#include <glTraceCommon.h>
#include <generated.h>

#define glEvalPoint1_wrp						\
    ((void  (*)(GLint i                                        \
    ))GL_ENTRY_PTR(glEvalPoint1_Idx))


GLAPI void  APIENTRY glEvalPoint1(GLint i)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEvalPoint1_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalPoint1_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalPoint1_wrp(i);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalPoint1_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalPoint1_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalPoint1_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalPoint1_Idx),
				 GL_ENTRY_LAST_TS(glEvalPoint1_Idx));


        if(last_diff > 1000000000){
            printf("glEvalPoint1 %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalPoint1_Idx),
	             GL_ENTRY_CALL_TIME(glEvalPoint1_Idx),
	             GL_ENTRY_CALL_TIME(glEvalPoint1_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalPoint1_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalPoint1_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalPoint1_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalPoint1_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalPoint1_Idx) = get_ts();
        }


	

}