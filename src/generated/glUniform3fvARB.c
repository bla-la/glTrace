#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3fvARB_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glUniform3fvARB_Idx))


GLAPI void  APIENTRY glUniform3fvARB(GLint location,GLsizei count,const GLfloat *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform3fvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3fvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3fvARB_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3fvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3fvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3fvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3fvARB_Idx),
				 GL_ENTRY_LAST_TS(glUniform3fvARB_Idx));


        if(last_diff > 1000000000){
            printf("glUniform3fvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3fvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3fvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3fvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3fvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3fvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3fvARB_Idx) = get_ts();
        }


	

}