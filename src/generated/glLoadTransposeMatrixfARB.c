#include <glTraceCommon.h>
#include <generated.h>

#define glLoadTransposeMatrixfARB_wrp						\
    ((void  (*)(const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glLoadTransposeMatrixfARB_Idx))


GLAPI void  APIENTRY glLoadTransposeMatrixfARB(const GLfloat *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLoadTransposeMatrixfARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadTransposeMatrixfARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadTransposeMatrixfARB_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadTransposeMatrixfARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixfARB_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadTransposeMatrixfARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadTransposeMatrixfARB_Idx),
				 GL_ENTRY_LAST_TS(glLoadTransposeMatrixfARB_Idx));


        if(last_diff > 1000000000){
            printf("glLoadTransposeMatrixfARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixfARB_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixfARB_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixfARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixfARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadTransposeMatrixfARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixfARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixfARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadTransposeMatrixfARB_Idx) = get_ts();
        }


	

}