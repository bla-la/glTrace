#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4fARB_wrp						\
    ((void  (*)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3                                        \
    ))GL_ENTRY_PTR(glUniform4fARB_Idx))


GLAPI void  APIENTRY glUniform4fARB(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform4fARB_Idx))
	{
            GL_ENTRY_PTR(glUniform4fARB_Idx) = dlsym(RTLD_NEXT,"glUniform4fARB");
            if(!GL_ENTRY_PTR(glUniform4fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform4fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4fARB_wrp(location,v0,v1,v2,v3);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4fARB_Idx),
				 GL_ENTRY_LAST_TS(glUniform4fARB_Idx));
        if(last_diff > 1000000000){
            printf("glUniform4fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4fARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4fARB_Idx) = get_ts();
        }


	

}