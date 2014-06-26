#include <glTraceCommon.h>
#include <generated.h>

#define glBindVideoCaptureStreamTextureNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLuint stream,GLenum frame_region,GLenum target,GLuint texture                                        \
    ))GL_ENTRY_PTR(glBindVideoCaptureStreamTextureNV_Idx))


GLAPI void  APIENTRY glBindVideoCaptureStreamTextureNV(GLuint video_capture_slot,GLuint stream,GLenum frame_region,GLenum target,GLuint texture)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glBindVideoCaptureStreamTextureNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindVideoCaptureStreamTextureNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindVideoCaptureStreamTextureNV_wrp(video_capture_slot,stream,frame_region,target,texture);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamTextureNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindVideoCaptureStreamTextureNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBindVideoCaptureStreamTextureNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindVideoCaptureStreamTextureNV_Idx),
				 GL_ENTRY_LAST_TS(glBindVideoCaptureStreamTextureNV_Idx));


        if(last_diff > 1000000000){
            printf("glBindVideoCaptureStreamTextureNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindVideoCaptureStreamTextureNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamTextureNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamTextureNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindVideoCaptureStreamTextureNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamTextureNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindVideoCaptureStreamTextureNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindVideoCaptureStreamTextureNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindVideoCaptureStreamTextureNV_Idx) = get_ts();
        }


	

}