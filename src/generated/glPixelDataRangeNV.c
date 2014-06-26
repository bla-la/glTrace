#include <glTraceCommon.h>
#include <generated.h>

#define glPixelDataRangeNV_wrp						\
    ((void  (*)(GLenum target,GLsizei length,const void *pointer                                        \
    ))GL_ENTRY_PTR(glPixelDataRangeNV_Idx))


GLAPI void  APIENTRY glPixelDataRangeNV(GLenum target,GLsizei length,const void *pointer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPixelDataRangeNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPixelDataRangeNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPixelDataRangeNV_wrp(target,length,pointer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPixelDataRangeNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPixelDataRangeNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPixelDataRangeNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPixelDataRangeNV_Idx),
				 GL_ENTRY_LAST_TS(glPixelDataRangeNV_Idx));


        if(last_diff > 1000000000){
            printf("glPixelDataRangeNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPixelDataRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glPixelDataRangeNV_Idx),
	             GL_ENTRY_CALL_TIME(glPixelDataRangeNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPixelDataRangeNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPixelDataRangeNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPixelDataRangeNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPixelDataRangeNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPixelDataRangeNV_Idx) = get_ts();
        }


	

}