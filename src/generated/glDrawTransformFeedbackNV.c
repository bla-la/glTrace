#include <glTraceCommon.h>
#include <generated.h>

#define glDrawTransformFeedbackNV_wrp						\
    ((void  (*)(GLenum mode,GLuint id                                        \
    ))GL_ENTRY_PTR(glDrawTransformFeedbackNV_Idx))


GLAPI void  APIENTRY glDrawTransformFeedbackNV(GLenum mode,GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDrawTransformFeedbackNV_Idx))
	{
            GL_ENTRY_PTR(glDrawTransformFeedbackNV_Idx) = dlsym(RTLD_NEXT,"glDrawTransformFeedbackNV");
            if(!GL_ENTRY_PTR(glDrawTransformFeedbackNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDrawTransformFeedbackNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawTransformFeedbackNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawTransformFeedbackNV_wrp(mode,id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawTransformFeedbackNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawTransformFeedbackNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawTransformFeedbackNV_Idx),
				 GL_ENTRY_LAST_TS(glDrawTransformFeedbackNV_Idx));
        if(last_diff > 1000000000){
            printf("glDrawTransformFeedbackNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackNV_Idx),
	             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawTransformFeedbackNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawTransformFeedbackNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawTransformFeedbackNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawTransformFeedbackNV_Idx) = get_ts();
        }


	

}