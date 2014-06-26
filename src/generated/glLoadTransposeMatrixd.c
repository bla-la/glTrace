#include <glTraceCommon.h>
#include <generated.h>

#define glLoadTransposeMatrixd_wrp						\
    ((void  (*)(const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glLoadTransposeMatrixd_Idx))


GLAPI void  APIENTRY glLoadTransposeMatrixd(const GLdouble *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLoadTransposeMatrixd_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadTransposeMatrixd_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadTransposeMatrixd_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadTransposeMatrixd_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixd_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadTransposeMatrixd_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadTransposeMatrixd_Idx),
				 GL_ENTRY_LAST_TS(glLoadTransposeMatrixd_Idx));


        if(last_diff > 1000000000){
            printf("glLoadTransposeMatrixd %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixd_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixd_Idx),
	             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixd_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixd_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadTransposeMatrixd_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadTransposeMatrixd_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadTransposeMatrixd_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadTransposeMatrixd_Idx) = get_ts();
        }


	

}