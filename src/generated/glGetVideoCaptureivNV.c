#include <glTraceCommon.h>
#include <generated.h>

#define glGetVideoCaptureivNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetVideoCaptureivNV_Idx))


GLAPI void  APIENTRY glGetVideoCaptureivNV(GLuint video_capture_slot,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetVideoCaptureivNV_Idx))
	{
            GL_ENTRY_PTR(glGetVideoCaptureivNV_Idx) = dlsym(RTLD_NEXT,"glGetVideoCaptureivNV");
            if(!GL_ENTRY_PTR(glGetVideoCaptureivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetVideoCaptureivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVideoCaptureivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVideoCaptureivNV_wrp(video_capture_slot,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVideoCaptureivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVideoCaptureivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVideoCaptureivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVideoCaptureivNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVideoCaptureivNV_Idx));
        if(last_diff > 1000000000){
            printf("glGetVideoCaptureivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVideoCaptureivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoCaptureivNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoCaptureivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVideoCaptureivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVideoCaptureivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVideoCaptureivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVideoCaptureivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVideoCaptureivNV_Idx) = get_ts();
        }


	

}