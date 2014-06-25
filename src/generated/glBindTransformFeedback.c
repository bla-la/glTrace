#include <glTraceCommon.h>
#include <generated.h>

#define glBindTransformFeedback_wrp						\
    ((void  (*)(GLenum target,GLuint id                                        \
    ))GL_ENTRY_PTR(glBindTransformFeedback_Idx))


GLAPI void  APIENTRY glBindTransformFeedback(GLenum target,GLuint id)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glBindTransformFeedback_Idx))
	{
            GL_ENTRY_PTR(glBindTransformFeedback_Idx) = dlsym(RTLD_NEXT,"glBindTransformFeedback");
            if(!GL_ENTRY_PTR(glBindTransformFeedback_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glBindTransformFeedback_Idx))
    	{
            GL_ENTRY_PREV_TS(glBindTransformFeedback_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glBindTransformFeedback_wrp(target,id);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glBindTransformFeedback_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glBindTransformFeedback_Idx) ++;

        GL_ENTRY_LAST_TS(glBindTransformFeedback_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glBindTransformFeedback_Idx),
				 GL_ENTRY_LAST_TS(glBindTransformFeedback_Idx));
        if(last_diff > 1000000000){
            printf("glBindTransformFeedback %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glBindTransformFeedback_Idx),
	             GL_ENTRY_CALL_TIME(glBindTransformFeedback_Idx),
	             GL_ENTRY_CALL_TIME(glBindTransformFeedback_Idx) /
	             GL_ENTRY_CALL_COUNT(glBindTransformFeedback_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glBindTransformFeedback_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glBindTransformFeedback_Idx) = 0;
             GL_ENTRY_CALL_TIME(glBindTransformFeedback_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glBindTransformFeedback_Idx) = get_ts();
        }


	

}