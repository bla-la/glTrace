#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageControlKHR_wrp						\
    ((void  (*)(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled                                        \
    ))GL_ENTRY_PTR(glDebugMessageControlKHR_Idx))


GLAPI void  APIENTRY glDebugMessageControlKHR(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDebugMessageControlKHR_Idx))
	{
            GL_ENTRY_PTR(glDebugMessageControlKHR_Idx) = dlsym(RTLD_NEXT,"glDebugMessageControlKHR");
            if(!GL_ENTRY_PTR(glDebugMessageControlKHR_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDebugMessageControlKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageControlKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageControlKHR_wrp(source,type,severity,count,ids,enabled);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageControlKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageControlKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageControlKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageControlKHR_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageControlKHR_Idx));
        if(last_diff > 1000000000){
            printf("glDebugMessageControlKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageControlKHR_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageControlKHR_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageControlKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageControlKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageControlKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageControlKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageControlKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageControlKHR_Idx) = get_ts();
        }


	

}