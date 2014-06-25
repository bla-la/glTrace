#include <glTraceCommon.h>
#include <generated.h>

#define glGetActiveUniformBlockiv_wrp						\
    ((void  (*)(GLuint program,GLuint uniformBlockIndex,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetActiveUniformBlockiv_Idx))


GLAPI void  APIENTRY glGetActiveUniformBlockiv(GLuint program,GLuint uniformBlockIndex,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetActiveUniformBlockiv_Idx))
	{
            GL_ENTRY_PTR(glGetActiveUniformBlockiv_Idx) = dlsym(RTLD_NEXT,"glGetActiveUniformBlockiv");
            if(!GL_ENTRY_PTR(glGetActiveUniformBlockiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetActiveUniformBlockiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetActiveUniformBlockiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetActiveUniformBlockiv_wrp(program,uniformBlockIndex,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetActiveUniformBlockiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetActiveUniformBlockiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetActiveUniformBlockiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetActiveUniformBlockiv_Idx),
				 GL_ENTRY_LAST_TS(glGetActiveUniformBlockiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetActiveUniformBlockiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformBlockiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformBlockiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetActiveUniformBlockiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetActiveUniformBlockiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetActiveUniformBlockiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetActiveUniformBlockiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetActiveUniformBlockiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetActiveUniformBlockiv_Idx) = get_ts();
        }


	

}