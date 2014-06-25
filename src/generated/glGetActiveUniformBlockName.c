#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveUniformBlockName_wrp						\
    ((void  (*)(GLuint program,GLuint uniformBlockIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformBlockName                                        \
    ))GL_ENTRY_PTR(glGetActiveUniformBlockName_Idx))


GLAPI void  APIENTRY glGetActiveUniformBlockName(GLuint program,GLuint uniformBlockIndex,GLsizei bufSize,GLsizei *length,GLchar *uniformBlockName)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveUniformBlockName_Idx))
	{
            GL_ENTRY_PTR(glGetActiveUniformBlockName_Idx) = dlsym(RTLD_NEXT,"glGetActiveUniformBlockName");
            if(!GL_ENTRY_PTR(glGetActiveUniformBlockName_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveUniformBlockName_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveUniformBlockName_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveUniformBlockName_wrp(program,uniformBlockIndex,bufSize,length,uniformBlockName);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveUniformBlockName_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveUniformBlockName_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveUniformBlockName_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveUniformBlockName_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveUniformBlockName_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveUniformBlockName %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformBlockName_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformBlockName_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformBlockName_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformBlockName_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveUniformBlockName_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveUniformBlockName_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveUniformBlockName_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveUniformBlockName_Idx) = get_ts();
        }


	

}