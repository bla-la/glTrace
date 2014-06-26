#include <glTraceCommon.h>
#include <generated.h>

#define glGenTransformFeedbacksNV_wrp						\
    ((void  (*)(GLsizei n,GLuint *ids                                        \
    ))GL_ENTRY_PTR(glGenTransformFeedbacksNV_Idx))


GLAPI void  APIENTRY glGenTransformFeedbacksNV(GLsizei n,GLuint *ids)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenTransformFeedbacksNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenTransformFeedbacksNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenTransformFeedbacksNV_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenTransformFeedbacksNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenTransformFeedbacksNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGenTransformFeedbacksNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenTransformFeedbacksNV_Idx),
				 GL_ENTRY_LAST_TS(glGenTransformFeedbacksNV_Idx));


        if(last_diff > 1000000000){
            printf("glGenTransformFeedbacksNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenTransformFeedbacksNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenTransformFeedbacksNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenTransformFeedbacksNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenTransformFeedbacksNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenTransformFeedbacksNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenTransformFeedbacksNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenTransformFeedbacksNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenTransformFeedbacksNV_Idx) = get_ts();
        }


	

}