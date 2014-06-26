#include <glTraceCommon.h>
#include <generated.h>

#define glGetnUniformfvARB_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei bufSize,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetnUniformfvARB_Idx))


GLAPI void  APIENTRY glGetnUniformfvARB(GLuint program,GLint location,GLsizei bufSize,GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnUniformfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnUniformfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnUniformfvARB_wrp(program,location,bufSize,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnUniformfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnUniformfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnUniformfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnUniformfvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnUniformfvARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnUniformfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnUniformfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnUniformfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnUniformfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnUniformfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnUniformfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnUniformfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnUniformfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnUniformfvARB_Idx) = get_ts();
        }


	

}