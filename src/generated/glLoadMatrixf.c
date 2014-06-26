#include <glTraceCommon.h>
#include <generated.h>

#define glLoadMatrixf_wrp						\
    ((void  (*)(const GLfloat *m                                        \
    ))GL_ENTRY_PTR(glLoadMatrixf_Idx))


GLAPI void  APIENTRY glLoadMatrixf(const GLfloat *m)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glLoadMatrixf_Idx))
    	{
            GL_ENTRY_PREV_TS(glLoadMatrixf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glLoadMatrixf_wrp(m);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glLoadMatrixf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glLoadMatrixf_Idx) ++;

        GL_ENTRY_LAST_TS(glLoadMatrixf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glLoadMatrixf_Idx),
				 GL_ENTRY_LAST_TS(glLoadMatrixf_Idx));


        if(last_diff > 1000000000){
            printf("glLoadMatrixf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glLoadMatrixf_Idx),
	             GL_ENTRY_CALL_TIME(glLoadMatrixf_Idx),
	             GL_ENTRY_CALL_TIME(glLoadMatrixf_Idx) /
	             GL_ENTRY_CALL_COUNT(glLoadMatrixf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glLoadMatrixf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glLoadMatrixf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glLoadMatrixf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glLoadMatrixf_Idx) = get_ts();
        }


	

}