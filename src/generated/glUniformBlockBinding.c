#include <glTraceCommon.h>
#include <generated.h>

#define glUniformBlockBinding_wrp						\
    ((void  (*)(GLuint program,GLuint uniformBlockIndex,GLuint uniformBlockBinding                                        \
    ))GL_ENTRY_PTR(glUniformBlockBinding_Idx))


GLAPI void  APIENTRY glUniformBlockBinding(GLuint program,GLuint uniformBlockIndex,GLuint uniformBlockBinding)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniformBlockBinding_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformBlockBinding_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformBlockBinding_wrp(program,uniformBlockIndex,uniformBlockBinding);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformBlockBinding_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformBlockBinding_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformBlockBinding_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformBlockBinding_Idx),
				 GL_ENTRY_LAST_TS(glUniformBlockBinding_Idx));


        if(last_diff > 1000000000){
            printf("glUniformBlockBinding %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformBlockBinding_Idx),
	             GL_ENTRY_CALL_TIME(glUniformBlockBinding_Idx),
	             GL_ENTRY_CALL_TIME(glUniformBlockBinding_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformBlockBinding_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformBlockBinding_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformBlockBinding_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformBlockBinding_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformBlockBinding_Idx) = get_ts();
        }


	

}