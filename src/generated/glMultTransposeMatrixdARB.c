#include <glTraceCommon.h>
#include <generated.h>

#define glMultTransposeMatrixdARB_wrp						\
    ((void  (*)(const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glMultTransposeMatrixdARB_Idx))


GLAPI void  APIENTRY glMultTransposeMatrixdARB(const GLdouble *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultTransposeMatrixdARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultTransposeMatrixdARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultTransposeMatrixdARB_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultTransposeMatrixdARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultTransposeMatrixdARB_Idx) ++;

        GL_ENTRY_LAST_TS(glMultTransposeMatrixdARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultTransposeMatrixdARB_Idx),
				 GL_ENTRY_LAST_TS(glMultTransposeMatrixdARB_Idx));


        if(last_diff > 1000000000){
            printf("glMultTransposeMatrixdARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixdARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixdARB_Idx),
	             GL_ENTRY_CALL_TIME(glMultTransposeMatrixdARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixdARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultTransposeMatrixdARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultTransposeMatrixdARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultTransposeMatrixdARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultTransposeMatrixdARB_Idx) = get_ts();
        }


	

}