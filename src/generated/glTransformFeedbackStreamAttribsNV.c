#include <glTraceCommon.h>
#include <generated.h>

#define glTransformFeedbackStreamAttribsNV_wrp						\
    ((void  (*)(GLsizei count,const GLint *attribs,GLsizei nbuffers,const GLint *bufstreams,GLenum bufferMode                                        \
    ))GL_ENTRY_PTR(glTransformFeedbackStreamAttribsNV_Idx))


GLAPI void  APIENTRY glTransformFeedbackStreamAttribsNV(GLsizei count,const GLint *attribs,GLsizei nbuffers,const GLint *bufstreams,GLenum bufferMode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glTransformFeedbackStreamAttribsNV_Idx))
	{
            GL_ENTRY_PTR(glTransformFeedbackStreamAttribsNV_Idx) = dlsym(RTLD_NEXT,"glTransformFeedbackStreamAttribsNV");
            if(!GL_ENTRY_PTR(glTransformFeedbackStreamAttribsNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glTransformFeedbackStreamAttribsNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glTransformFeedbackStreamAttribsNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glTransformFeedbackStreamAttribsNV_wrp(count,attribs,nbuffers,bufstreams,bufferMode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glTransformFeedbackStreamAttribsNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glTransformFeedbackStreamAttribsNV_Idx) ++;

        GL_ENTRY_LAST_TS(glTransformFeedbackStreamAttribsNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glTransformFeedbackStreamAttribsNV_Idx),
				 GL_ENTRY_LAST_TS(glTransformFeedbackStreamAttribsNV_Idx));
        if(last_diff > 1000000000){
            printf("glTransformFeedbackStreamAttribsNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackStreamAttribsNV_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackStreamAttribsNV_Idx),
	             GL_ENTRY_CALL_TIME(glTransformFeedbackStreamAttribsNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glTransformFeedbackStreamAttribsNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glTransformFeedbackStreamAttribsNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glTransformFeedbackStreamAttribsNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glTransformFeedbackStreamAttribsNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glTransformFeedbackStreamAttribsNV_Idx) = get_ts();
        }


	

}