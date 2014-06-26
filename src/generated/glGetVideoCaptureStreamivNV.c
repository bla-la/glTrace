#include <glTraceCommon.h>
#include <generated.h>

#define glGetVideoCaptureStreamivNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLuint stream,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVideoCaptureStreamivNV_Idx))


GLAPI void  APIENTRY glGetVideoCaptureStreamivNV(GLuint video_capture_slot,GLuint stream,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVideoCaptureStreamivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVideoCaptureStreamivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVideoCaptureStreamivNV_wrp(video_capture_slot,stream,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVideoCaptureStreamivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVideoCaptureStreamivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVideoCaptureStreamivNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetVideoCaptureStreamivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVideoCaptureStreamivNV_Idx) = get_ts();
        }


	

}