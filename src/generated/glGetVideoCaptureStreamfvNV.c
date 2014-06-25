#include <glTraceCommon.h>
#include <generated.h>

#define glGetVideoCaptureStreamfvNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLuint stream,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetVideoCaptureStreamfvNV_Idx))


GLAPI void  APIENTRY glGetVideoCaptureStreamfvNV(GLuint video_capture_slot,GLuint stream,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVideoCaptureStreamfvNV_Idx))
	{
            GL_ENTRY_PTR(glGetVideoCaptureStreamfvNV_Idx) = dlsym(RTLD_NEXT,"glGetVideoCaptureStreamfvNV");
            if(!GL_ENTRY_PTR(glGetVideoCaptureStreamfvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVideoCaptureStreamfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVideoCaptureStreamfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVideoCaptureStreamfvNV_wrp(video_capture_slot,stream,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVideoCaptureStreamfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVideoCaptureStreamfvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVideoCaptureStreamfvNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetVideoCaptureStreamfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVideoCaptureStreamfvNV_Idx) = get_ts();
        }


	

}