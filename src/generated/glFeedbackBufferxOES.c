#include <glTraceCommon.h>
#include <generated.h>

#define glFeedbackBufferxOES_wrp						\
    ((void  (*)(GLsizei n,GLenum type,const GLfixed *buffer                                        \
    ))GL_ENTRY_PTR(glFeedbackBufferxOES_Idx))


GLAPI void  APIENTRY glFeedbackBufferxOES(GLsizei n,GLenum type,const GLfixed *buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFeedbackBufferxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glFeedbackBufferxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFeedbackBufferxOES_wrp(n,type,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFeedbackBufferxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFeedbackBufferxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glFeedbackBufferxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFeedbackBufferxOES_Idx),
				 GL_ENTRY_LAST_TS(glFeedbackBufferxOES_Idx));


        if(last_diff > 1000000000){
            printf("glFeedbackBufferxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFeedbackBufferxOES_Idx),
	             GL_ENTRY_CALL_TIME(glFeedbackBufferxOES_Idx),
	             GL_ENTRY_CALL_TIME(glFeedbackBufferxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glFeedbackBufferxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFeedbackBufferxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFeedbackBufferxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFeedbackBufferxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFeedbackBufferxOES_Idx) = get_ts();
        }


	

}