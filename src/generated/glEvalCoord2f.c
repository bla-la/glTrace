#include <glTraceCommon.h>
#include <generated.h>

#define glEvalCoord2f_wrp						\
    ((void  (*)(GLfloat u,GLfloat v                                        \
    ))GL_ENTRY_PTR(glEvalCoord2f_Idx))


GLAPI void  APIENTRY glEvalCoord2f(GLfloat u,GLfloat v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEvalCoord2f_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalCoord2f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalCoord2f_wrp(u,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalCoord2f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalCoord2f_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalCoord2f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalCoord2f_Idx),
				 GL_ENTRY_LAST_TS(glEvalCoord2f_Idx));


        if(last_diff > 1000000000){
            printf("glEvalCoord2f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalCoord2f_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord2f_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord2f_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalCoord2f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalCoord2f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalCoord2f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalCoord2f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalCoord2f_Idx) = get_ts();
        }


	

}