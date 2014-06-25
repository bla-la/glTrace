#include <glTraceCommon.h>
#include <generated.h>

#define glBeginTransformFeedbackEXT_wrp						\
    ((void  (*)(GLenum primitiveMode                                        \
    ))GL_ENTRY_PTR(glBeginTransformFeedbackEXT_Idx))


GLAPI void  APIENTRY glBeginTransformFeedbackEXT(GLenum primitiveMode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginTransformFeedbackEXT_Idx))
	{
            GL_ENTRY_PTR(glBeginTransformFeedbackEXT_Idx) = dlsym(RTLD_NEXT,"glBeginTransformFeedbackEXT");
            if(!GL_ENTRY_PTR(glBeginTransformFeedbackEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginTransformFeedbackEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginTransformFeedbackEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginTransformFeedbackEXT_wrp(primitiveMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginTransformFeedbackEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginTransformFeedbackEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginTransformFeedbackEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginTransformFeedbackEXT_Idx),
				 GL_ENTRY_LAST_TS(glBeginTransformFeedbackEXT_Idx));
        if(last_diff > 1000000000){
            printf("glBeginTransformFeedbackEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginTransformFeedbackEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBeginTransformFeedbackEXT_Idx),
	             GL_ENTRY_CALL_TIME(glBeginTransformFeedbackEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginTransformFeedbackEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginTransformFeedbackEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginTransformFeedbackEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginTransformFeedbackEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginTransformFeedbackEXT_Idx) = get_ts();
        }


	

}