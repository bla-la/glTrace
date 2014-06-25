#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformfvARB_wrp						\
    ((void  (*)(GLhandleARB programObj,GLint location,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetUniformfvARB_Idx))


GLAPI void  APIENTRY glGetUniformfvARB(GLhandleARB programObj,GLint location,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformfvARB_Idx))
	{
            GL_ENTRY_PTR(glGetUniformfvARB_Idx) = dlsym(RTLD_NEXT,"glGetUniformfvARB");
            if(!GL_ENTRY_PTR(glGetUniformfvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformfvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformfvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformfvARB_wrp(programObj,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformfvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformfvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformfvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformfvARB_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformfvARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformfvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformfvARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformfvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformfvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformfvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformfvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformfvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformfvARB_Idx) = get_ts();
        }


	

}