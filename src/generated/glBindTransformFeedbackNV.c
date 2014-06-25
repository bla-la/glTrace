#include <glTraceCommon.h>
#include <generated.h>

#define glBindTransformFeedbackNV_wrp						\
    ((void  (*)(GLenum target,GLuint id                                        \
    ))GL_ENTRY_PTR(glBindTransformFeedbackNV_Idx))


GLAPI void  APIENTRY glBindTransformFeedbackNV(GLenum target,GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindTransformFeedbackNV_Idx))
	{
            GL_ENTRY_PTR(glBindTransformFeedbackNV_Idx) = dlsym(RTLD_NEXT,"glBindTransformFeedbackNV");
            if(!GL_ENTRY_PTR(glBindTransformFeedbackNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindTransformFeedbackNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindTransformFeedbackNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindTransformFeedbackNV_wrp(target,id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindTransformFeedbackNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindTransformFeedbackNV_Idx) ++;

        GL_ENTRY_LAST_TS(glBindTransformFeedbackNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindTransformFeedbackNV_Idx),
				 GL_ENTRY_LAST_TS(glBindTransformFeedbackNV_Idx));
        if(last_diff > 1000000000){
            printf("glBindTransformFeedbackNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindTransformFeedbackNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindTransformFeedbackNV_Idx),
	             GL_ENTRY_CALL_TIME(glBindTransformFeedbackNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindTransformFeedbackNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindTransformFeedbackNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindTransformFeedbackNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindTransformFeedbackNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindTransformFeedbackNV_Idx) = get_ts();
        }


	

}