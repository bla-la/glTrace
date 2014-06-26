#include <glTraceCommon.h>
#include <generated.h>

#define glTransformFeedbackAttribsNV_wrp						\
    ((void  (*)(GLsizei count,const GLint *attribs,GLenum bufferMode                                        \
    ))GL_ENTRY_PTR(glTransformFeedbackAttribsNV_Idx))


GLAPI void  APIENTRY glTransformFeedbackAttribsNV(GLsizei count,const GLint *attribs,GLenum bufferMode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glTransformFeedbackAttribsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTransformFeedbackAttribsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTransformFeedbackAttribsNV_wrp(count,attribs,bufferMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTransformFeedbackAttribsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTransformFeedbackAttribsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTransformFeedbackAttribsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTransformFeedbackAttribsNV_Idx),
				 GL_ENTRY_LAST_TS(glTransformFeedbackAttribsNV_Idx));


        if(last_diff > 1000000000){
            printf("glTransformFeedbackAttribsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackAttribsNV_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackAttribsNV_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackAttribsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackAttribsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTransformFeedbackAttribsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTransformFeedbackAttribsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTransformFeedbackAttribsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTransformFeedbackAttribsNV_Idx) = get_ts();
        }


	

}