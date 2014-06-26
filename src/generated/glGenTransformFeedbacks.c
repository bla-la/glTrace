#include <glTraceCommon.h>
#include <generated.h>

#define glGenTransformFeedbacks_wrp						\
    ((void  (*)(GLsizei n,GLuint *ids                                        \
    ))GL_ENTRY_PTR(glGenTransformFeedbacks_Idx))


GLAPI void  APIENTRY glGenTransformFeedbacks(GLsizei n,GLuint *ids)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenTransformFeedbacks_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenTransformFeedbacks_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenTransformFeedbacks_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenTransformFeedbacks_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenTransformFeedbacks_Idx) ++;

        GL_ENTRY_LAST_TS(glGenTransformFeedbacks_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenTransformFeedbacks_Idx),
				 GL_ENTRY_LAST_TS(glGenTransformFeedbacks_Idx));


        if(last_diff > 1000000000){
            printf("glGenTransformFeedbacks %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenTransformFeedbacks_Idx),
	             GL_ENTRY_CALL_TIME(glGenTransformFeedbacks_Idx),
	             GL_ENTRY_CALL_TIME(glGenTransformFeedbacks_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenTransformFeedbacks_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenTransformFeedbacks_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenTransformFeedbacks_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenTransformFeedbacks_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenTransformFeedbacks_Idx) = get_ts();
        }


	

}