#include <glTraceCommon.h>
#include <generated.h>

#define glBeginTransformFeedbackNV_wrp						\
    ((void  (*)(GLenum primitiveMode                                        \
    ))GL_ENTRY_PTR(glBeginTransformFeedbackNV_Idx))


GLAPI void  APIENTRY glBeginTransformFeedbackNV(GLenum primitiveMode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBeginTransformFeedbackNV_Idx))
	{
            GL_ENTRY_PTR(glBeginTransformFeedbackNV_Idx) = dlsym(RTLD_NEXT,"glBeginTransformFeedbackNV");
            if(!GL_ENTRY_PTR(glBeginTransformFeedbackNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBeginTransformFeedbackNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBeginTransformFeedbackNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBeginTransformFeedbackNV_wrp(primitiveMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBeginTransformFeedbackNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBeginTransformFeedbackNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBeginTransformFeedbackNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBeginTransformFeedbackNV_Idx),
				 GL_ENTRY_LAST_TS(glBeginTransformFeedbackNV_Idx));
        if(last_diff > 1000000000){
            printf("glBeginTransformFeedbackNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBeginTransformFeedbackNV_Idx),
	             GL_ENTRY_CALL_TIME(glBeginTransformFeedbackNV_Idx),
	             GL_ENTRY_CALL_TIME(glBeginTransformFeedbackNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBeginTransformFeedbackNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBeginTransformFeedbackNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBeginTransformFeedbackNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBeginTransformFeedbackNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBeginTransformFeedbackNV_Idx) = get_ts();
        }


	

}