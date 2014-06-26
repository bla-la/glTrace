#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteTransformFeedbacks_wrp						\
    ((void  (*)(GLsizei n,const GLuint *ids                                        \
    ))GL_ENTRY_PTR(glDeleteTransformFeedbacks_Idx))


GLAPI void  APIENTRY glDeleteTransformFeedbacks(GLsizei n,const GLuint *ids)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteTransformFeedbacks_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteTransformFeedbacks_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteTransformFeedbacks_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteTransformFeedbacks_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteTransformFeedbacks_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteTransformFeedbacks_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteTransformFeedbacks_Idx),
				 GL_ENTRY_LAST_TS(glDeleteTransformFeedbacks_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteTransformFeedbacks %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteTransformFeedbacks_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteTransformFeedbacks_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteTransformFeedbacks_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteTransformFeedbacks_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteTransformFeedbacks_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteTransformFeedbacks_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteTransformFeedbacks_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteTransformFeedbacks_Idx) = get_ts();
        }


	

}