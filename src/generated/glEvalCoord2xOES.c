#include <glTraceCommon.h>
#include <generated.h>

#define glEvalCoord2xOES_wrp						\
    ((void  (*)(GLfixed u,GLfixed v                                        \
    ))GL_ENTRY_PTR(glEvalCoord2xOES_Idx))


GLAPI void  APIENTRY glEvalCoord2xOES(GLfixed u,GLfixed v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEvalCoord2xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalCoord2xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalCoord2xOES_wrp(u,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalCoord2xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalCoord2xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalCoord2xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalCoord2xOES_Idx),
				 GL_ENTRY_LAST_TS(glEvalCoord2xOES_Idx));


        if(last_diff > 1000000000){
            printf("glEvalCoord2xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalCoord2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord2xOES_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord2xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalCoord2xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalCoord2xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalCoord2xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalCoord2xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalCoord2xOES_Idx) = get_ts();
        }


	

}