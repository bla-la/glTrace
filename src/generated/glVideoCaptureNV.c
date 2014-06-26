#include <glTraceCommon.h>
#include <generated.h>

#define glVideoCaptureNV_wrp						\
    ((GLenum  (*)(GLuint video_capture_slot,GLuint *sequence_num,GLuint64EXT *capture_time                                        \
    ))GL_ENTRY_PTR(glVideoCaptureNV_Idx))


GLAPI GLenum  APIENTRY glVideoCaptureNV(GLuint video_capture_slot,GLuint *sequence_num,GLuint64EXT *capture_time)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVideoCaptureNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVideoCaptureNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glVideoCaptureNV_wrp(video_capture_slot,sequence_num,capture_time);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVideoCaptureNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVideoCaptureNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVideoCaptureNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVideoCaptureNV_Idx),
				 GL_ENTRY_LAST_TS(glVideoCaptureNV_Idx));


        if(last_diff > 1000000000){
            printf("glVideoCaptureNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVideoCaptureNV_Idx),
	             GL_ENTRY_CALL_TIME(glVideoCaptureNV_Idx),
	             GL_ENTRY_CALL_TIME(glVideoCaptureNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVideoCaptureNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVideoCaptureNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVideoCaptureNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVideoCaptureNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVideoCaptureNV_Idx) = get_ts();
        }


	return retval;

}