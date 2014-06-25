#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTransformFeedbackStreamInstanced_wrp						\
    ((void  (*)(GLenum mode,GLuint id,GLuint stream,GLsizei instancecount                                        \
    ))GL_ENTRY_PTR(glDrawTransformFeedbackStreamInstanced_Idx))


GLAPI void  APIENTRY glDrawTransformFeedbackStreamInstanced(GLenum mode,GLuint id,GLuint stream,GLsizei instancecount)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawTransformFeedbackStreamInstanced_Idx))
	{
            GL_ENTRY_PTR(glDrawTransformFeedbackStreamInstanced_Idx) = dlsym(RTLD_NEXT,"glDrawTransformFeedbackStreamInstanced");
            if(!GL_ENTRY_PTR(glDrawTransformFeedbackStreamInstanced_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawTransformFeedbackStreamInstanced_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTransformFeedbackStreamInstanced_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTransformFeedbackStreamInstanced_wrp(mode,id,stream,instancecount);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStreamInstanced_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackStreamInstanced_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTransformFeedbackStreamInstanced_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTransformFeedbackStreamInstanced_Idx),
				 GL_ENTRY_LAST_TS(glDrawTransformFeedbackStreamInstanced_Idx));
        if(last_diff > 1000000000){
            printf("glDrawTransformFeedbackStreamInstanced %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackStreamInstanced_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStreamInstanced_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStreamInstanced_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackStreamInstanced_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStreamInstanced_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackStreamInstanced_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackStreamInstanced_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTransformFeedbackStreamInstanced_Idx) = get_ts();
        }


	

}