#include <glTraceCommon.h>
#include <generated.h>

#define glUniformHandleui64vARB_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLuint64 *value                                        \
    ))GL_ENTRY_PTR(glUniformHandleui64vARB_Idx))


GLAPI void  APIENTRY glUniformHandleui64vARB(GLint location,GLsizei count,const GLuint64 *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniformHandleui64vARB_Idx))
	{
            GL_ENTRY_PTR(glUniformHandleui64vARB_Idx) = dlsym(RTLD_NEXT,"glUniformHandleui64vARB");
            if(!GL_ENTRY_PTR(glUniformHandleui64vARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniformHandleui64vARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformHandleui64vARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformHandleui64vARB_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformHandleui64vARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformHandleui64vARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformHandleui64vARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformHandleui64vARB_Idx),
				 GL_ENTRY_LAST_TS(glUniformHandleui64vARB_Idx));
        if(last_diff > 1000000000){
            printf("glUniformHandleui64vARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformHandleui64vARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniformHandleui64vARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniformHandleui64vARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformHandleui64vARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformHandleui64vARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformHandleui64vARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformHandleui64vARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformHandleui64vARB_Idx) = get_ts();
        }


	

}