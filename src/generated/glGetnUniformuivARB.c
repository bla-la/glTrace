#include <glTraceCommon.h>
#include <generated.h>

#define glGetnUniformuivARB_wrp						\
    ((void  (*)(GLuint program,GLint location,GLsizei bufSize,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetnUniformuivARB_Idx))


GLAPI void  APIENTRY glGetnUniformuivARB(GLuint program,GLint location,GLsizei bufSize,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetnUniformuivARB_Idx))
	{
            GL_ENTRY_PTR(glGetnUniformuivARB_Idx) = dlsym(RTLD_NEXT,"glGetnUniformuivARB");
            if(!GL_ENTRY_PTR(glGetnUniformuivARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetnUniformuivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnUniformuivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnUniformuivARB_wrp(program,location,bufSize,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnUniformuivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnUniformuivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnUniformuivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnUniformuivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnUniformuivARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetnUniformuivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnUniformuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnUniformuivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnUniformuivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnUniformuivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnUniformuivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnUniformuivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnUniformuivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnUniformuivARB_Idx) = get_ts();
        }


	

}