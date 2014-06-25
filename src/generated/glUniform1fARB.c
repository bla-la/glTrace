#include <glTraceCommon.h>
#include <generated.h>

#define glUniform1fARB_wrp						\
    ((void  (*)(GLint location,GLfloat v0                                        \
    ))GL_ENTRY_PTR(glUniform1fARB_Idx))


GLAPI void  APIENTRY glUniform1fARB(GLint location,GLfloat v0)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform1fARB_Idx))
	{
            GL_ENTRY_PTR(glUniform1fARB_Idx) = dlsym(RTLD_NEXT,"glUniform1fARB");
            if(!GL_ENTRY_PTR(glUniform1fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform1fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform1fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform1fARB_wrp(location,v0);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform1fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform1fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform1fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform1fARB_Idx),
				 GL_ENTRY_LAST_TS(glUniform1fARB_Idx));
        if(last_diff > 1000000000){
            printf("glUniform1fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform1fARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform1fARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform1fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform1fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform1fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform1fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform1fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform1fARB_Idx) = get_ts();
        }


	

}