#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteRenderbuffersOES_wrp						\
    ((void  (*)(GLsizei n,const GLuint *renderbuffers                                        \
    ))GL_ENTRY_PTR(glDeleteRenderbuffersOES_Idx))


GLAPI void  APIENTRY glDeleteRenderbuffersOES(GLsizei n,const GLuint *renderbuffers)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteRenderbuffersOES_Idx))
	{
            GL_ENTRY_PTR(glDeleteRenderbuffersOES_Idx) = dlsym(RTLD_NEXT,"glDeleteRenderbuffersOES");
            if(!GL_ENTRY_PTR(glDeleteRenderbuffersOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteRenderbuffersOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteRenderbuffersOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteRenderbuffersOES_wrp(n,renderbuffers);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteRenderbuffersOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteRenderbuffersOES_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteRenderbuffersOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteRenderbuffersOES_Idx),
				 GL_ENTRY_LAST_TS(glDeleteRenderbuffersOES_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteRenderbuffersOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffersOES_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteRenderbuffersOES_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteRenderbuffersOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffersOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteRenderbuffersOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteRenderbuffersOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteRenderbuffersOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteRenderbuffersOES_Idx) = get_ts();
        }


	

}