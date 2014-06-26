#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteRenderbuffersEXT_wrp						\
    ((void  (*)(GLsizei n,const GLuint *renderbuffers                                        \
    ))GL_ENTRY_PTR(glDeleteRenderbuffersEXT_Idx))


GLAPI void  APIENTRY glDeleteRenderbuffersEXT(GLsizei n,const GLuint *renderbuffers)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteRenderbuffersEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteRenderbuffersEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteRenderbuffersEXT_wrp(n,renderbuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteRenderbuffersEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteRenderbuffersEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteRenderbuffersEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteRenderbuffersEXT_Idx),
				 GL_ENTRY_LAST_TS(glDeleteRenderbuffersEXT_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteRenderbuffersEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteRenderbuffersEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteRenderbuffersEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffersEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteRenderbuffersEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffersEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteRenderbuffersEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteRenderbuffersEXT_Idx) = get_ts();
        }


	

}