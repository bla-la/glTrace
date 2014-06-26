#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3fARB_wrp						\
    ((void  (*)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2                                        \
    ))GL_ENTRY_PTR(glUniform3fARB_Idx))


GLAPI void  APIENTRY glUniform3fARB(GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform3fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3fARB_wrp(location,v0,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3fARB_Idx),
				 GL_ENTRY_LAST_TS(glUniform3fARB_Idx));


        if(last_diff > 1000000000){
            printf("glUniform3fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3fARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3fARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3fARB_Idx) = get_ts();
        }


	

}