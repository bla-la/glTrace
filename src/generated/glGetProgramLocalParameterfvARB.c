#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramLocalParameterfvARB_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetProgramLocalParameterfvARB_Idx))


GLAPI void  APIENTRY glGetProgramLocalParameterfvARB(GLenum target,GLuint index,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetProgramLocalParameterfvARB_Idx))
	{
            GL_ENTRY_PTR(glGetProgramLocalParameterfvARB_Idx) = dlsym(RTLD_NEXT,"glGetProgramLocalParameterfvARB");
            if(!GL_ENTRY_PTR(glGetProgramLocalParameterfvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetProgramLocalParameterfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramLocalParameterfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramLocalParameterfvARB_wrp(target,index,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramLocalParameterfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramLocalParameterfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramLocalParameterfvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramLocalParameterfvARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetProgramLocalParameterfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramLocalParameterfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramLocalParameterfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramLocalParameterfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramLocalParameterfvARB_Idx) = get_ts();
        }


	

}