#include <glTraceCommon.h>
#include <generated.h>

#define glVideoCaptureStreamParameterivNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glVideoCaptureStreamParameterivNV_Idx))


GLAPI void  APIENTRY glVideoCaptureStreamParameterivNV(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVideoCaptureStreamParameterivNV_Idx))
	{
            GL_ENTRY_PTR(glVideoCaptureStreamParameterivNV_Idx) = dlsym(RTLD_NEXT,"glVideoCaptureStreamParameterivNV");
            if(!GL_ENTRY_PTR(glVideoCaptureStreamParameterivNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterivNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterivNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVideoCaptureStreamParameterivNV_wrp(video_capture_slot,stream,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterivNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterivNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVideoCaptureStreamParameterivNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterivNV_Idx),
				 GL_ENTRY_LAST_TS(glVideoCaptureStreamParameterivNV_Idx));
        if(last_diff > 1000000000){
            printf("glVideoCaptureStreamParameterivNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterivNV_Idx),
	             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterivNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterivNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterivNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterivNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterivNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterivNV_Idx) = get_ts();
        }


	

}