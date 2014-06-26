#include <glTraceCommon.h>
#include <generated.h>

#define glFlushPixelDataRangeNV_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glFlushPixelDataRangeNV_Idx))


GLAPI void  APIENTRY glFlushPixelDataRangeNV(GLenum target)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFlushPixelDataRangeNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glFlushPixelDataRangeNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFlushPixelDataRangeNV_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFlushPixelDataRangeNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFlushPixelDataRangeNV_Idx) ++;

        GL_ENTRY_LAST_TS(glFlushPixelDataRangeNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFlushPixelDataRangeNV_Idx),
				 GL_ENTRY_LAST_TS(glFlushPixelDataRangeNV_Idx));


        if(last_diff > 1000000000){
            printf("glFlushPixelDataRangeNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFlushPixelDataRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glFlushPixelDataRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glFlushPixelDataRangeNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glFlushPixelDataRangeNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFlushPixelDataRangeNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFlushPixelDataRangeNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFlushPixelDataRangeNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFlushPixelDataRangeNV_Idx) = get_ts();
        }


	

}