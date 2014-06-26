#include <glTraceCommon.h>
#include <generated.h>

#define glLoadTransposeMatrixdARB_wrp						\
    ((void  (*)(const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glLoadTransposeMatrixdARB_Idx))


GLAPI void  APIENTRY glLoadTransposeMatrixdARB(const GLdouble *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLoadTransposeMatrixdARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadTransposeMatrixdARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadTransposeMatrixdARB_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadTransposeMatrixdARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixdARB_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadTransposeMatrixdARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadTransposeMatrixdARB_Idx),
				 GL_ENTRY_LAST_TS(glLoadTransposeMatrixdARB_Idx));


        if(last_diff > 1000000000){
            printf("glLoadTransposeMatrixdARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixdARB_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixdARB_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixdARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixdARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadTransposeMatrixdARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixdARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixdARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadTransposeMatrixdARB_Idx) = get_ts();
        }


	

}