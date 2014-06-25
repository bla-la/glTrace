#include <glTraceCommon.h>
#include <generated.h>

#define glIsTransformFeedback_wrp						\
    ((GLboolean  (*)(GLuint id                                        \
    ))GL_ENTRY_PTR(glIsTransformFeedback_Idx))


GLAPI GLboolean  APIENTRY glIsTransformFeedback(GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsTransformFeedback_Idx))
	{
            GL_ENTRY_PTR(glIsTransformFeedback_Idx) = dlsym(RTLD_NEXT,"glIsTransformFeedback");
            if(!GL_ENTRY_PTR(glIsTransformFeedback_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsTransformFeedback_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsTransformFeedback_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsTransformFeedback_wrp(id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsTransformFeedback_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsTransformFeedback_Idx) ++;

        GL_ENTRY_LAST_TS(glIsTransformFeedback_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsTransformFeedback_Idx),
				 GL_ENTRY_LAST_TS(glIsTransformFeedback_Idx));
        if(last_diff > 1000000000){
            printf("glIsTransformFeedback %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsTransformFeedback_Idx),
	             GL_ENTRY_CALL_TIME(glIsTransformFeedback_Idx),
	             GL_ENTRY_CALL_TIME(glIsTransformFeedback_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsTransformFeedback_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsTransformFeedback_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsTransformFeedback_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsTransformFeedback_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsTransformFeedback_Idx) = get_ts();
        }


	return retval;

}