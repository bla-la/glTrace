#include <glTraceCommon.h>
#include <generated.h>

#define glUniformMatrix3fvARB_wrp						\
    ((void  (*)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glUniformMatrix3fvARB_Idx))


GLAPI void  APIENTRY glUniformMatrix3fvARB(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniformMatrix3fvARB_Idx))
	{
            GL_ENTRY_PTR(glUniformMatrix3fvARB_Idx) = dlsym(RTLD_NEXT,"glUniformMatrix3fvARB");
            if(!GL_ENTRY_PTR(glUniformMatrix3fvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniformMatrix3fvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformMatrix3fvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformMatrix3fvARB_wrp(location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformMatrix3fvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformMatrix3fvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformMatrix3fvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformMatrix3fvARB_Idx),
				 GL_ENTRY_LAST_TS(glUniformMatrix3fvARB_Idx));
        if(last_diff > 1000000000){
            printf("glUniformMatrix3fvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformMatrix3fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix3fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix3fvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformMatrix3fvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformMatrix3fvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformMatrix3fvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformMatrix3fvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformMatrix3fvARB_Idx) = get_ts();
        }


	

}