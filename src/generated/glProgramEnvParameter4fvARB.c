#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameter4fvARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameter4fvARB_Idx))


GLAPI void  APIENTRY glProgramEnvParameter4fvARB(GLenum target,GLuint index,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramEnvParameter4fvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameter4fvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameter4fvARB_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameter4fvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameter4fvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameter4fvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameter4fvARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameter4fvARB_Idx));


        if(last_diff > 1000000000){
            printf("glProgramEnvParameter4fvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameter4fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameter4fvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4fvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameter4fvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4fvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameter4fvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameter4fvARB_Idx) = get_ts();
        }


	

}