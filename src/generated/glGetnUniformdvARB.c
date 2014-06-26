#include <glTraceCommon.h>
#include <generated.h>

#define glGetnUniformdvARB_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei bufSize,GLdouble *params                                        \
    ))GL_ENTRY_PTR(glGetnUniformdvARB_Idx))


GLAPI void  APIENTRY glGetnUniformdvARB(GLuint program,GLint location,GLsizei bufSize,GLdouble *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnUniformdvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnUniformdvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnUniformdvARB_wrp(program,location,bufSize,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnUniformdvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnUniformdvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnUniformdvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnUniformdvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnUniformdvARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnUniformdvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnUniformdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnUniformdvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnUniformdvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnUniformdvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnUniformdvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnUniformdvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnUniformdvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnUniformdvARB_Idx) = get_ts();
        }


	

}