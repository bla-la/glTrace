#include <glTraceCommon.h>
#include <generated.h>

#define glGetTransformFeedbackVaryingNV_wrp						\
    ((void  (*)(GLuint program,GLuint index,GLint *location                                        \
    ))GL_ENTRY_PTR(glGetTransformFeedbackVaryingNV_Idx))


GLAPI void  APIENTRY glGetTransformFeedbackVaryingNV(GLuint program,GLuint index,GLint *location)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetTransformFeedbackVaryingNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetTransformFeedbackVaryingNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetTransformFeedbackVaryingNV_wrp(program,index,location);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVaryingNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGetTransformFeedbackVaryingNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetTransformFeedbackVaryingNV_Idx),
				 GL_ENTRY_LAST_TS(glGetTransformFeedbackVaryingNV_Idx));


        if(last_diff > 1000000000){
            printf("glGetTransformFeedbackVaryingNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVaryingNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingNV_Idx),
	             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVaryingNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetTransformFeedbackVaryingNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetTransformFeedbackVaryingNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetTransformFeedbackVaryingNV_Idx) = get_ts();
        }


	

}