#include <glTraceCommon.h>
#include <generated.h>

#define glIsTransformFeedbackNV_wrp						\
    ((GLboolean  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glIsTransformFeedbackNV_Idx))


GLAPI GLboolean  APIENTRY glIsTransformFeedbackNV(GLuint id)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsTransformFeedbackNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsTransformFeedbackNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsTransformFeedbackNV_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsTransformFeedbackNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsTransformFeedbackNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsTransformFeedbackNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsTransformFeedbackNV_Idx),
				 GL_ENTRY_LAST_TS(glIsTransformFeedbackNV_Idx));


        if(last_diff > 1000000000){
            printf("glIsTransformFeedbackNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsTransformFeedbackNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsTransformFeedbackNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsTransformFeedbackNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsTransformFeedbackNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsTransformFeedbackNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsTransformFeedbackNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsTransformFeedbackNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsTransformFeedbackNV_Idx) = get_ts();
        }


	return retval;

}