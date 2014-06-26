#include <glTraceCommon.h>
#include <generated.h>

#define glTransformFeedbackVaryingsEXT_wrp						\
    ((void  (*)(GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode                                        \
    ))GL_ENTRY_PTR(glTransformFeedbackVaryingsEXT_Idx))


GLAPI void  APIENTRY glTransformFeedbackVaryingsEXT(GLuint program,GLsizei count,const GLchar *const*varyings,GLenum bufferMode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTransformFeedbackVaryingsEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glTransformFeedbackVaryingsEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTransformFeedbackVaryingsEXT_wrp(program,count,varyings,bufferMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryingsEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glTransformFeedbackVaryingsEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTransformFeedbackVaryingsEXT_Idx),
				 GL_ENTRY_LAST_TS(glTransformFeedbackVaryingsEXT_Idx));


        if(last_diff > 1000000000){
            printf("glTransformFeedbackVaryingsEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryingsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsEXT_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryingsEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryingsEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTransformFeedbackVaryingsEXT_Idx) = get_ts();
        }


	

}