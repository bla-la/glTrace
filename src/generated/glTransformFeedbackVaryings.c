#include <glTraceCommon.h>
#include <generated.h>

#define glTransformFeedbackVaryings_wrp						\
    ((void  (*)(GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode                                        \
    ))GL_ENTRY_PTR(glTransformFeedbackVaryings_Idx))


GLAPI void  APIENTRY glTransformFeedbackVaryings(GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTransformFeedbackVaryings_Idx))
    	{
            GL_ENTRY_PREV_TS(glTransformFeedbackVaryings_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTransformFeedbackVaryings_wrp(program,count,varyings,bufferMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTransformFeedbackVaryings_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryings_Idx) ++;

        GL_ENTRY_LAST_TS(glTransformFeedbackVaryings_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTransformFeedbackVaryings_Idx),
				 GL_ENTRY_LAST_TS(glTransformFeedbackVaryings_Idx));


        if(last_diff > 1000000000){
            printf("glTransformFeedbackVaryings %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryings_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryings_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryings_Idx) /
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryings_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTransformFeedbackVaryings_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryings_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryings_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTransformFeedbackVaryings_Idx) = get_ts();
        }


	

}