#include <glTraceCommon.h>
#include <generated.h>

#define glBindVideoCaptureStreamBufferNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLuint stream,GLenum frame_region,GLintptrARB offset                                        \
    ))GL_ENTRY_PTR(glBindVideoCaptureStreamBufferNV_Idx))


GLAPI void  APIENTRY glBindVideoCaptureStreamBufferNV(GLuint video_capture_slot,GLuint stream,GLenum frame_region,GLintptrARB offset)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindVideoCaptureStreamBufferNV_Idx))
	{
            GL_ENTRY_PTR(glBindVideoCaptureStreamBufferNV_Idx) = dlsym(RTLD_NEXT,"glBindVideoCaptureStreamBufferNV");
            if(!GL_ENTRY_PTR(glBindVideoCaptureStreamBufferNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindVideoCaptureStreamBufferNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindVideoCaptureStreamBufferNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindVideoCaptureStreamBufferNV_wrp(video_capture_slot,stream,frame_region,offset);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamBufferNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindVideoCaptureStreamBufferNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBindVideoCaptureStreamBufferNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindVideoCaptureStreamBufferNV_Idx),
				 GL_ENTRY_LAST_TS(glBindVideoCaptureStreamBufferNV_Idx));
        if(last_diff > 1000000000){
            printf("glBindVideoCaptureStreamBufferNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindVideoCaptureStreamBufferNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamBufferNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamBufferNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindVideoCaptureStreamBufferNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamBufferNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindVideoCaptureStreamBufferNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamBufferNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindVideoCaptureStreamBufferNV_Idx) = get_ts();
        }


	

}