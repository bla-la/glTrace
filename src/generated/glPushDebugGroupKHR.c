#include <glTraceCommon.h>
#include <generated.h>

#define glPushDebugGroupKHR_wrp						\
    ((void  (*)(GLenum source,GLuint id,GLsizei length,const GLchar *message                                        \
    ))GL_ENTRY_PTR(glPushDebugGroupKHR_Idx))


GLAPI void  APIENTRY glPushDebugGroupKHR(GLenum source,GLuint id,GLsizei length,const GLchar *message)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPushDebugGroupKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glPushDebugGroupKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPushDebugGroupKHR_wrp(source,id,length,message);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPushDebugGroupKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPushDebugGroupKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glPushDebugGroupKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPushDebugGroupKHR_Idx),
				 GL_ENTRY_LAST_TS(glPushDebugGroupKHR_Idx));


        if(last_diff > 1000000000){
            printf("glPushDebugGroupKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPushDebugGroupKHR_Idx),
	             GL_ENTRY_CALL_TIME(glPushDebugGroupKHR_Idx),
	             GL_ENTRY_CALL_TIME(glPushDebugGroupKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glPushDebugGroupKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPushDebugGroupKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPushDebugGroupKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPushDebugGroupKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPushDebugGroupKHR_Idx) = get_ts();
        }


	

}