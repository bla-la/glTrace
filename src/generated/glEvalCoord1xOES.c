#include <glTraceCommon.h>
#include <generated.h>

#define glEvalCoord1xOES_wrp						\
    ((void  (*)(GLfixed u                                        \
    ))GL_ENTRY_PTR(glEvalCoord1xOES_Idx))


GLAPI void  APIENTRY glEvalCoord1xOES(GLfixed u)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEvalCoord1xOES_Idx))
	{
            GL_ENTRY_PTR(glEvalCoord1xOES_Idx) = dlsym(RTLD_NEXT,"glEvalCoord1xOES");
            if(!GL_ENTRY_PTR(glEvalCoord1xOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEvalCoord1xOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glEvalCoord1xOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEvalCoord1xOES_wrp(u);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEvalCoord1xOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEvalCoord1xOES_Idx) ++;

        GL_ENTRY_LAST_TS(glEvalCoord1xOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEvalCoord1xOES_Idx),
				 GL_ENTRY_LAST_TS(glEvalCoord1xOES_Idx));
        if(last_diff > 1000000000){
            printf("glEvalCoord1xOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEvalCoord1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord1xOES_Idx),
	             GL_ENTRY_CALL_TIME(glEvalCoord1xOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glEvalCoord1xOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEvalCoord1xOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEvalCoord1xOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEvalCoord1xOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEvalCoord1xOES_Idx) = get_ts();
        }


	

}