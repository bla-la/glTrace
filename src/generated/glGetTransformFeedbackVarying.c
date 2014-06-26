#include <glTraceCommon.h>
#include <generated.h>

#define glGetTransformFeedbackVarying_wrp						\
    ((void  (*)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetTransformFeedbackVarying_Idx))


GLAPI void  APIENTRY glGetTransformFeedbackVarying(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTransformFeedbackVarying_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTransformFeedbackVarying_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTransformFeedbackVarying_wrp(program,index,bufSize,length,size,type,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTransformFeedbackVarying_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVarying_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTransformFeedbackVarying_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTransformFeedbackVarying_Idx),
				 GL_ENTRY_LAST_TS(glGetTransformFeedbackVarying_Idx));


        if(last_diff > 1000000000){
            printf("glGetTransformFeedbackVarying %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVarying_Idx),
	             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVarying_Idx),
	             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVarying_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVarying_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTransformFeedbackVarying_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVarying_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVarying_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTransformFeedbackVarying_Idx) = get_ts();
        }


	

}