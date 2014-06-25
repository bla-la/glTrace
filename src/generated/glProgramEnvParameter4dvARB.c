#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameter4dvARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,const GLdouble *params                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameter4dvARB_Idx))


GLAPI void  APIENTRY glProgramEnvParameter4dvARB(GLenum target,GLuint index,const GLdouble *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramEnvParameter4dvARB_Idx))
	{
            GL_ENTRY_PTR(glProgramEnvParameter4dvARB_Idx) = dlsym(RTLD_NEXT,"glProgramEnvParameter4dvARB");
            if(!GL_ENTRY_PTR(glProgramEnvParameter4dvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramEnvParameter4dvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameter4dvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameter4dvARB_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameter4dvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameter4dvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameter4dvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameter4dvARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameter4dvARB_Idx));
        if(last_diff > 1000000000){
            printf("glProgramEnvParameter4dvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameter4dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameter4dvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4dvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameter4dvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4dvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameter4dvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameter4dvARB_Idx) = get_ts();
        }


	

}