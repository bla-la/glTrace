#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformBlockIndex_wrp						\
    ((GLuint  (*)(GLuint program,const GLchar *uniformBlockName                                        \
    ))GL_ENTRY_PTR(glGetUniformBlockIndex_Idx))


GLAPI GLuint  APIENTRY glGetUniformBlockIndex(GLuint program,const GLchar *uniformBlockName)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformBlockIndex_Idx))
	{
            GL_ENTRY_PTR(glGetUniformBlockIndex_Idx) = dlsym(RTLD_NEXT,"glGetUniformBlockIndex");
            if(!GL_ENTRY_PTR(glGetUniformBlockIndex_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformBlockIndex_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformBlockIndex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLuint  retval = glGetUniformBlockIndex_wrp(program,uniformBlockName);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformBlockIndex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformBlockIndex_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformBlockIndex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformBlockIndex_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformBlockIndex_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformBlockIndex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformBlockIndex_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformBlockIndex_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformBlockIndex_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformBlockIndex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformBlockIndex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformBlockIndex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformBlockIndex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformBlockIndex_Idx) = get_ts();
        }


	return retval;

}