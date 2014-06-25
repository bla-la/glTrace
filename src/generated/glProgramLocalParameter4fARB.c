#include <glTraceCommon.h>
#include <generated.h>

#define glProgramLocalParameter4fARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w                                        \
    ))GL_ENTRY_PTR(glProgramLocalParameter4fARB_Idx))


GLAPI void  APIENTRY glProgramLocalParameter4fARB(GLenum target,GLuint index,GLfloat x,GLfloat y,GLfloat z,GLfloat w)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glProgramLocalParameter4fARB_Idx))
	{
            GL_ENTRY_PTR(glProgramLocalParameter4fARB_Idx) = dlsym(RTLD_NEXT,"glProgramLocalParameter4fARB");
            if(!GL_ENTRY_PTR(glProgramLocalParameter4fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glProgramLocalParameter4fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramLocalParameter4fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramLocalParameter4fARB_wrp(target,index,x,y,z,w);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramLocalParameter4fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramLocalParameter4fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramLocalParameter4fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramLocalParameter4fARB_Idx),
				 GL_ENTRY_LAST_TS(glProgramLocalParameter4fARB_Idx));
        if(last_diff > 1000000000){
            printf("glProgramLocalParameter4fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameter4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameter4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glProgramLocalParameter4fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramLocalParameter4fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramLocalParameter4fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramLocalParameter4fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramLocalParameter4fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramLocalParameter4fARB_Idx) = get_ts();
        }


	

}