#include <glTraceCommon.h>
#include <generated.h>

#define glGetTransformFeedbackVaryingEXT_wrp						\
    ((void  (*)(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name                                        \
    ))GL_ENTRY_PTR(glGetTransformFeedbackVaryingEXT_Idx))


GLAPI void  APIENTRY glGetTransformFeedbackVaryingEXT(GLuint program,GLuint index,GLsizei bufSize,GLsizei *length,GLsizei *size,GLenum *type,GLchar *name)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetTransformFeedbackVaryingEXT_Idx))
	{
            GL_ENTRY_PTR(glGetTransformFeedbackVaryingEXT_Idx) = dlsym(RTLD_NEXT,"glGetTransformFeedbackVaryingEXT");
            if(!GL_ENTRY_PTR(glGetTransformFeedbackVaryingEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetTransformFeedbackVaryingEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTransformFeedbackVaryingEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTransformFeedbackVaryingEXT_wrp(program,index,bufSize,length,size,type,name);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVaryingEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTransformFeedbackVaryingEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTransformFeedbackVaryingEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetTransformFeedbackVaryingEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetTransformFeedbackVaryingEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVaryingEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVaryingEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVaryingEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTransformFeedbackVaryingEXT_Idx) = get_ts();
        }


	

}