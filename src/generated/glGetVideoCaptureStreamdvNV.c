#include <glTraceCommon.h>
#include <generated.h>

#define glGetVideoCaptureStreamdvNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLuint stream,GLenum pname,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetVideoCaptureStreamdvNV_Idx))


GLAPI void  APIENTRY glGetVideoCaptureStreamdvNV(GLuint video_capture_slot,GLuint stream,GLenum pname,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetVideoCaptureStreamdvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetVideoCaptureStreamdvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetVideoCaptureStreamdvNV_wrp(video_capture_slot,stream,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamdvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamdvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetVideoCaptureStreamdvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetVideoCaptureStreamdvNV_Idx),
				 GL_ENTRY_LAST_TS(glGetVideoCaptureStreamdvNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetVideoCaptureStreamdvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamdvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamdvNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamdvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamdvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamdvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetVideoCaptureStreamdvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetVideoCaptureStreamdvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetVideoCaptureStreamdvNV_Idx) = get_ts();
        }


	

}