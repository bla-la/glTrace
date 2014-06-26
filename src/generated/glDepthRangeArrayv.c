#include <glTraceCommon.h>
#include <generated.h>

#define glDepthRangeArrayv_wrp						\
    ((void  (*)(GLuint first,GLsizei count,const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glDepthRangeArrayv_Idx))


GLAPI void  APIENTRY glDepthRangeArrayv(GLuint first,GLsizei count,const GLdouble *v)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDepthRangeArrayv_Idx))
    	{
            GL_ENTRY_PREV_TS(glDepthRangeArrayv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDepthRangeArrayv_wrp(first,count,v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDepthRangeArrayv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDepthRangeArrayv_Idx) ++;

        GL_ENTRY_LAST_TS(glDepthRangeArrayv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDepthRangeArrayv_Idx),
				 GL_ENTRY_LAST_TS(glDepthRangeArrayv_Idx));


        if(last_diff > 1000000000){
            printf("glDepthRangeArrayv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDepthRangeArrayv_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangeArrayv_Idx),
	             GL_ENTRY_CALL_TIME(glDepthRangeArrayv_Idx) /
	             GL_ENTRY_CALL_COUNT(glDepthRangeArrayv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDepthRangeArrayv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDepthRangeArrayv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDepthRangeArrayv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDepthRangeArrayv_Idx) = get_ts();
        }


	

}