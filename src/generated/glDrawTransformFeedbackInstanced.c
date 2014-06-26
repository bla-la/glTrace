#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTransformFeedbackInstanced_wrp						\
    ((void  (*)(GLenum mode,GLuint id,GLsizei instancecount                                        \
    ))GL_ENTRY_PTR(glDrawTransformFeedbackInstanced_Idx))


GLAPI void  APIENTRY glDrawTransformFeedbackInstanced(GLenum mode,GLuint id,GLsizei instancecount)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawTransformFeedbackInstanced_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTransformFeedbackInstanced_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTransformFeedbackInstanced_wrp(mode,id,instancecount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTransformFeedbackInstanced_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackInstanced_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTransformFeedbackInstanced_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTransformFeedbackInstanced_Idx),
				 GL_ENTRY_LAST_TS(glDrawTransformFeedbackInstanced_Idx));


        if(last_diff > 1000000000){
            printf("glDrawTransformFeedbackInstanced %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackInstanced_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackInstanced_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackInstanced_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackInstanced_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTransformFeedbackInstanced_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackInstanced_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackInstanced_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTransformFeedbackInstanced_Idx) = get_ts();
        }


	

}