#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameter4fARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameter4fARB_Idx))


GLAPI void  APIENTRY glProgramEnvParameter4fARB(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramEnvParameter4fARB_Idx))
	{
            GL_ENTRY_PTR(glProgramEnvParameter4fARB_Idx) = dlsym(RTLD_NEXT,"glProgramEnvParameter4fARB");
            if(!GL_ENTRY_PTR(glProgramEnvParameter4fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramEnvParameter4fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameter4fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameter4fARB_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameter4fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameter4fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameter4fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameter4fARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameter4fARB_Idx));
        if(last_diff > 1000000000){
            printf("glProgramEnvParameter4fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameter4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameter4fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameter4fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameter4fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameter4fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameter4fARB_Idx) = get_ts();
        }


	

}