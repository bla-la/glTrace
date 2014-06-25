#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTransformFeedback_wrp						\
    ((void  (*)(GLenum mode,GLuint id                                        \
    ))GL_ENTRY_PTR(glDrawTransformFeedback_Idx))


GLAPI void  APIENTRY glDrawTransformFeedback(GLenum mode,GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawTransformFeedback_Idx))
	{
            GL_ENTRY_PTR(glDrawTransformFeedback_Idx) = dlsym(RTLD_NEXT,"glDrawTransformFeedback");
            if(!GL_ENTRY_PTR(glDrawTransformFeedback_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawTransformFeedback_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTransformFeedback_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTransformFeedback_wrp(mode,id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTransformFeedback_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTransformFeedback_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTransformFeedback_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTransformFeedback_Idx),
				 GL_ENTRY_LAST_TS(glDrawTransformFeedback_Idx));
        if(last_diff > 1000000000){
            printf("glDrawTransformFeedback %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedback_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedback_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedback_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedback_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTransformFeedback_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTransformFeedback_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTransformFeedback_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTransformFeedback_Idx) = get_ts();
        }


	

}