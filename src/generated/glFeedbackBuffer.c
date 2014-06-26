#include <glTraceCommon.h>
#include <generated.h>

#define glFeedbackBuffer_wrp						\
    ((void  (*)(GLsizei size,GLenum type,GLfloat *buffer                                        \
    ))GL_ENTRY_PTR(glFeedbackBuffer_Idx))


GLAPI void  APIENTRY glFeedbackBuffer(GLsizei size,GLenum type,GLfloat *buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFeedbackBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glFeedbackBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFeedbackBuffer_wrp(size,type,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFeedbackBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFeedbackBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glFeedbackBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFeedbackBuffer_Idx),
				 GL_ENTRY_LAST_TS(glFeedbackBuffer_Idx));


        if(last_diff > 1000000000){
            printf("glFeedbackBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFeedbackBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glFeedbackBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glFeedbackBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glFeedbackBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFeedbackBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFeedbackBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFeedbackBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFeedbackBuffer_Idx) = get_ts();
        }


	

}