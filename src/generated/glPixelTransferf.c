#include <glTraceCommon.h>
#include <generated.h>

#define glPixelTransferf_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPixelTransferf_Idx))


GLAPI void  APIENTRY glPixelTransferf(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelTransferf_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelTransferf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelTransferf_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelTransferf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelTransferf_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelTransferf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelTransferf_Idx),
				 GL_ENTRY_LAST_TS(glPixelTransferf_Idx));


        if(last_diff > 1000000000){
            printf("glPixelTransferf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelTransferf_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransferf_Idx),
	             GL_ENTRY_CALL_TIME(glPixelTransferf_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelTransferf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelTransferf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelTransferf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelTransferf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelTransferf_Idx) = get_ts();
        }


	

}