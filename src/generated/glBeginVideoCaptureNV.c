#include <glTraceCommon.h>
#include <generated.h>

#define glBeginVideoCaptureNV_wrp						\
    ((void  (*)(GLuint video_capture_slot                                        \
    ))GL_ENTRY_PTR(glBeginVideoCaptureNV_Idx))


GLAPI void  APIENTRY glBeginVideoCaptureNV(GLuint video_capture_slot)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBeginVideoCaptureNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginVideoCaptureNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginVideoCaptureNV_wrp(video_capture_slot);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginVideoCaptureNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginVideoCaptureNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginVideoCaptureNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginVideoCaptureNV_Idx),
				 GL_ENTRY_LAST_TS(glBeginVideoCaptureNV_Idx));


        if(last_diff > 1000000000){
            printf("glBeginVideoCaptureNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginVideoCaptureNV_Idx),
	             GL_ENTRY_CALL_TIME(glBeginVideoCaptureNV_Idx),
	             GL_ENTRY_CALL_TIME(glBeginVideoCaptureNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginVideoCaptureNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginVideoCaptureNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginVideoCaptureNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginVideoCaptureNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginVideoCaptureNV_Idx) = get_ts();
        }


	

}