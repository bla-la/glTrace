#include <glTraceCommon.h>
#include <generated.h>

#define glPresentFrameKeyedNV_wrp						\
    ((void  (*)(GLuint video_slot,GLuint64EXT minPresentTime,GLuint beginPresentTimeId,GLuint presentDurationId,GLenum type,GLenum target0,GLuint fill0,GLuint key0,GLenum target1,GLuint fill1,GLuint key1                                        \
    ))GL_ENTRY_PTR(glPresentFrameKeyedNV_Idx))


GLAPI void  APIENTRY glPresentFrameKeyedNV(GLuint video_slot,GLuint64EXT minPresentTime,GLuint beginPresentTimeId,GLuint presentDurationId,GLenum type,GLenum target0,GLuint fill0,GLuint key0,GLenum target1,GLuint fill1,GLuint key1)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPresentFrameKeyedNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPresentFrameKeyedNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPresentFrameKeyedNV_wrp(video_slot,minPresentTime,beginPresentTimeId,presentDurationId,type,target0,fill0,key0,target1,fill1,key1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPresentFrameKeyedNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPresentFrameKeyedNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPresentFrameKeyedNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPresentFrameKeyedNV_Idx),
				 GL_ENTRY_LAST_TS(glPresentFrameKeyedNV_Idx));


        if(last_diff > 1000000000){
            printf("glPresentFrameKeyedNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPresentFrameKeyedNV_Idx),
	             GL_ENTRY_CALL_TIME(glPresentFrameKeyedNV_Idx),
	             GL_ENTRY_CALL_TIME(glPresentFrameKeyedNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPresentFrameKeyedNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPresentFrameKeyedNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPresentFrameKeyedNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPresentFrameKeyedNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPresentFrameKeyedNV_Idx) = get_ts();
        }


	

}