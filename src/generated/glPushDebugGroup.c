#include <glTraceCommon.h>
#include <generated.h>

#define glPushDebugGroup_wrp						\
    ((void  (*)(GLenum source,GLuint id,GLsizei length,const GLchar *message                                        \
    ))GL_ENTRY_PTR(glPushDebugGroup_Idx))


GLAPI void  APIENTRY glPushDebugGroup(GLenum source,GLuint id,GLsizei length,const GLchar *message)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPushDebugGroup_Idx))
    	{
            GL_ENTRY_PREV_TS(glPushDebugGroup_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPushDebugGroup_wrp(source,id,length,message);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPushDebugGroup_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPushDebugGroup_Idx) ++;

        GL_ENTRY_LAST_TS(glPushDebugGroup_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPushDebugGroup_Idx),
				 GL_ENTRY_LAST_TS(glPushDebugGroup_Idx));


        if(last_diff > 1000000000){
            printf("glPushDebugGroup %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPushDebugGroup_Idx),
	             GL_ENTRY_CALL_TIME(glPushDebugGroup_Idx),
	             GL_ENTRY_CALL_TIME(glPushDebugGroup_Idx) /
	             GL_ENTRY_CALL_COUNT(glPushDebugGroup_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPushDebugGroup_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPushDebugGroup_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPushDebugGroup_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPushDebugGroup_Idx) = get_ts();
        }


	

}