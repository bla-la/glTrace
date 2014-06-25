#include <glTraceCommon.h>
#include <generated.h>

#define glEndVideoCaptureNV_wrp						\
    ((void  (*)(GLuint video_capture_slot                                        \
    ))GL_ENTRY_PTR(glEndVideoCaptureNV_Idx))


GLAPI void  APIENTRY glEndVideoCaptureNV(GLuint video_capture_slot)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEndVideoCaptureNV_Idx))
	{
            GL_ENTRY_PTR(glEndVideoCaptureNV_Idx) = dlsym(RTLD_NEXT,"glEndVideoCaptureNV");
            if(!GL_ENTRY_PTR(glEndVideoCaptureNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEndVideoCaptureNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glEndVideoCaptureNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEndVideoCaptureNV_wrp(video_capture_slot);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEndVideoCaptureNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEndVideoCaptureNV_Idx) ++;

        GL_ENTRY_LAST_TS(glEndVideoCaptureNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEndVideoCaptureNV_Idx),
				 GL_ENTRY_LAST_TS(glEndVideoCaptureNV_Idx));
        if(last_diff > 1000000000){
            printf("glEndVideoCaptureNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEndVideoCaptureNV_Idx),
	             GL_ENTRY_CALL_TIME(glEndVideoCaptureNV_Idx),
	             GL_ENTRY_CALL_TIME(glEndVideoCaptureNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glEndVideoCaptureNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEndVideoCaptureNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEndVideoCaptureNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEndVideoCaptureNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEndVideoCaptureNV_Idx) = get_ts();
        }


	

}