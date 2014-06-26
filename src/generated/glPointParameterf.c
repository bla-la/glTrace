#include <glTraceCommon.h>
#include <generated.h>

#define glPointParameterf_wrp						\
    ((void  (*)(GLenum pname,GLfloat param                                        \
    ))GL_ENTRY_PTR(glPointParameterf_Idx))


GLAPI void  APIENTRY glPointParameterf(GLenum pname,GLfloat param)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPointParameterf_Idx))
    	{
            GL_ENTRY_PREV_TS(glPointParameterf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPointParameterf_wrp(pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPointParameterf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPointParameterf_Idx) ++;

        GL_ENTRY_LAST_TS(glPointParameterf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPointParameterf_Idx),
				 GL_ENTRY_LAST_TS(glPointParameterf_Idx));


        if(last_diff > 1000000000){
            printf("glPointParameterf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPointParameterf_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterf_Idx),
	             GL_ENTRY_CALL_TIME(glPointParameterf_Idx) /
	             GL_ENTRY_CALL_COUNT(glPointParameterf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPointParameterf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPointParameterf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPointParameterf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPointParameterf_Idx) = get_ts();
        }


	

}