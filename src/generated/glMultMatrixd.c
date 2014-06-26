#include <glTraceCommon.h>
#include <generated.h>

#define glMultMatrixd_wrp						\
    ((void  (*)(const GLdouble *m                                        \
    ))GL_ENTRY_PTR(glMultMatrixd_Idx))


GLAPI void  APIENTRY glMultMatrixd(const GLdouble *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMultMatrixd_Idx))
    	{
            GL_ENTRY_PREV_TS(glMultMatrixd_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMultMatrixd_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMultMatrixd_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMultMatrixd_Idx) ++;

        GL_ENTRY_LAST_TS(glMultMatrixd_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMultMatrixd_Idx),
				 GL_ENTRY_LAST_TS(glMultMatrixd_Idx));


        if(last_diff > 1000000000){
            printf("glMultMatrixd %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMultMatrixd_Idx),
	             GL_ENTRY_CALL_TIME(glMultMatrixd_Idx),
	             GL_ENTRY_CALL_TIME(glMultMatrixd_Idx) /
	             GL_ENTRY_CALL_COUNT(glMultMatrixd_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMultMatrixd_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMultMatrixd_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMultMatrixd_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMultMatrixd_Idx) = get_ts();
        }


	

}