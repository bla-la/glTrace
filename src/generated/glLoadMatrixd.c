#include <glTraceCommon.h>
#include <generated.h>

#define glLoadMatrixd_wrp						\
    ((void  (*)(const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glLoadMatrixd_Idx))


GLAPI void  APIENTRY glLoadMatrixd(const GLdouble *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLoadMatrixd_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadMatrixd_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadMatrixd_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadMatrixd_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadMatrixd_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadMatrixd_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadMatrixd_Idx),
				 GL_ENTRY_LAST_TS(glLoadMatrixd_Idx));


        if(last_diff > 1000000000){
            printf("glLoadMatrixd %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadMatrixd_Idx),
	             GL_ENTRY_CALL_TIME(glLoadMatrixd_Idx),
	             GL_ENTRY_CALL_TIME(glLoadMatrixd_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadMatrixd_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadMatrixd_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadMatrixd_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadMatrixd_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadMatrixd_Idx) = get_ts();
        }


	

}