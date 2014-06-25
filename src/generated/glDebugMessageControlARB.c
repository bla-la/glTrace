#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageControlARB_wrp						\
    ((void  (*)(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled                                        \
    ))GL_ENTRY_PTR(glDebugMessageControlARB_Idx))


GLAPI void  APIENTRY glDebugMessageControlARB(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDebugMessageControlARB_Idx))
	{
            GL_ENTRY_PTR(glDebugMessageControlARB_Idx) = dlsym(RTLD_NEXT,"glDebugMessageControlARB");
            if(!GL_ENTRY_PTR(glDebugMessageControlARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDebugMessageControlARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageControlARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageControlARB_wrp(source,type,severity,count,ids,enabled);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageControlARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageControlARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageControlARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageControlARB_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageControlARB_Idx));
        if(last_diff > 1000000000){
            printf("glDebugMessageControlARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageControlARB_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageControlARB_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageControlARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageControlARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageControlARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageControlARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageControlARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageControlARB_Idx) = get_ts();
        }


	

}