#include <glTraceCommon.h>
#include <generated.h>

#define glVideoCaptureStreamParameterfvNV_wrp						\
    ((void  (*)(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glVideoCaptureStreamParameterfvNV_Idx))


GLAPI void  APIENTRY glVideoCaptureStreamParameterfvNV(GLuint video_capture_slot,GLuint stream,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterfvNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterfvNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glVideoCaptureStreamParameterfvNV_wrp(video_capture_slot,stream,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterfvNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterfvNV_Idx) ++;

        GL_ENTRY_LAST_TS(glVideoCaptureStreamParameterfvNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterfvNV_Idx),
				 GL_ENTRY_LAST_TS(glVideoCaptureStreamParameterfvNV_Idx));


        if(last_diff > 1000000000){
            printf("glVideoCaptureStreamParameterfvNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterfvNV_Idx),
	             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterfvNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterfvNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterfvNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glVideoCaptureStreamParameterfvNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glVideoCaptureStreamParameterfvNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glVideoCaptureStreamParameterfvNV_Idx) = get_ts();
        }


	

}