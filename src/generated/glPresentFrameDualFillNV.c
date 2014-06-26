#include <glTraceCommon.h>
#include <generated.h>

#define glPresentFrameDualFillNV_wrp						\
    ((void  (*)(GLuint video_slot,GLuint64EXT minPresentTime,GLuint beginPresentTimeId,GLuint presentDurationId,GLenum type,GLenum target0,GLuint fill0,GLenum target1,GLuint fill1,GLenum target2,GLuint fill2,GLenum target3,GLuint fill3                                        \
    ))GL_ENTRY_PTR(glPresentFrameDualFillNV_Idx))


GLAPI void  APIENTRY glPresentFrameDualFillNV(GLuint video_slot,GLuint64EXT minPresentTime,GLuint beginPresentTimeId,GLuint presentDurationId,GLenum type,GLenum target0,GLuint fill0,GLenum target1,GLuint fill1,GLenum target2,GLuint fill2,GLenum target3,GLuint fill3)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPresentFrameDualFillNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPresentFrameDualFillNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPresentFrameDualFillNV_wrp(video_slot,minPresentTime,beginPresentTimeId,presentDurationId,type,target0,fill0,target1,fill1,target2,fill2,target3,fill3);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPresentFrameDualFillNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPresentFrameDualFillNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPresentFrameDualFillNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPresentFrameDualFillNV_Idx),
				 GL_ENTRY_LAST_TS(glPresentFrameDualFillNV_Idx));


        if(last_diff > 1000000000){
            printf("glPresentFrameDualFillNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPresentFrameDualFillNV_Idx),
	             GL_ENTRY_CALL_TIME(glPresentFrameDualFillNV_Idx),
	             GL_ENTRY_CALL_TIME(glPresentFrameDualFillNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPresentFrameDualFillNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPresentFrameDualFillNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPresentFrameDualFillNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPresentFrameDualFillNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPresentFrameDualFillNV_Idx) = get_ts();
        }


	

}