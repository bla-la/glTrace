#include <glTraceCommon.h>
#include <generated.h>

#define glTransformFeedbackVaryingsNV_wrp						\
    ((void  (*)(GLuint program,GLsizei count,const GLint *locations,GLenum bufferMode                                        \
    ))GL_ENTRY_PTR(glTransformFeedbackVaryingsNV_Idx))


GLAPI void  APIENTRY glTransformFeedbackVaryingsNV(GLuint program,GLsizei count,const GLint *locations,GLenum bufferMode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTransformFeedbackVaryingsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTransformFeedbackVaryingsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTransformFeedbackVaryingsNV_wrp(program,count,locations,bufferMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryingsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTransformFeedbackVaryingsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTransformFeedbackVaryingsNV_Idx),
				 GL_ENTRY_LAST_TS(glTransformFeedbackVaryingsNV_Idx));


        if(last_diff > 1000000000){
            printf("glTransformFeedbackVaryingsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryingsNV_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsNV_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryingsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTransformFeedbackVaryingsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTransformFeedbackVaryingsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTransformFeedbackVaryingsNV_Idx) = get_ts();
        }


	

}