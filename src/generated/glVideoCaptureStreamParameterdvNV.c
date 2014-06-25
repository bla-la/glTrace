#include <glTraceCommon.h>
#include <generated.h>

#define glVideoCaptureStreamParameterdvNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLdouble *params                                        \
    ))GL_ENTRY_PTR(glVideoCaptureStreamParameterdvNV_Idx))


GLAPI void  APIENTRY glVideoCaptureStreamParameterdvNV(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glVideoCaptureStreamParameterdvNV_Idx))
	{
            GL_ENTRY_PTR(glVideoCaptureStreamParameterdvNV_Idx) = dlsym(RTLD_NEXT,"glVideoCaptureStreamParameterdvNV");
            if(!GL_ENTRY_PTR(glVideoCaptureStreamParameterdvNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterdvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterdvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVideoCaptureStreamParameterdvNV_wrp(video_capture_slot,stream,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterdvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterdvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVideoCaptureStreamParameterdvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterdvNV_Idx),
				 GL_ENTRY_LAST_TS(glVideoCaptureStreamParameterdvNV_Idx));
        if(last_diff > 1000000000){
            printf("glVideoCaptureStreamParameterdvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterdvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterdvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterdvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterdvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterdvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterdvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterdvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterdvNV_Idx) = get_ts();
        }


	

}