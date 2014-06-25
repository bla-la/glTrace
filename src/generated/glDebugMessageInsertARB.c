#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageInsertARB_wrp						\
    ((void  (*)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf                                        \
    ))GL_ENTRY_PTR(glDebugMessageInsertARB_Idx))


GLAPI void  APIENTRY glDebugMessageInsertARB(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDebugMessageInsertARB_Idx))
	{
            GL_ENTRY_PTR(glDebugMessageInsertARB_Idx) = dlsym(RTLD_NEXT,"glDebugMessageInsertARB");
            if(!GL_ENTRY_PTR(glDebugMessageInsertARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDebugMessageInsertARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageInsertARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageInsertARB_wrp(source,type,id,severity,length,buf);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageInsertARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageInsertARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageInsertARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageInsertARB_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageInsertARB_Idx));
        if(last_diff > 1000000000){
            printf("glDebugMessageInsertARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageInsertARB_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageInsertARB_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageInsertARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageInsertARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageInsertARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageInsertARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageInsertARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageInsertARB_Idx) = get_ts();
        }


	

}