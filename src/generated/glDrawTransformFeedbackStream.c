#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTransformFeedbackStream_wrp						\
    ((void  (*)(GLenum mode,GLuint id,GLuint stream                                        \
    ))GL_ENTRY_PTR(glDrawTransformFeedbackStream_Idx))


GLAPI void  APIENTRY glDrawTransformFeedbackStream(GLenum mode,GLuint id,GLuint stream)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawTransformFeedbackStream_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTransformFeedbackStream_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTransformFeedbackStream_wrp(mode,id,stream);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStream_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackStream_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTransformFeedbackStream_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTransformFeedbackStream_Idx),
				 GL_ENTRY_LAST_TS(glDrawTransformFeedbackStream_Idx));


        if(last_diff > 1000000000){
            printf("glDrawTransformFeedbackStream %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackStream_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStream_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStream_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackStream_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStream_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackStream_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStream_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTransformFeedbackStream_Idx) = get_ts();
        }


	

}