#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageInsertKHR_wrp						\
    ((void  (*)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf                                        \
    ))GL_ENTRY_PTR(glDebugMessageInsertKHR_Idx))


GLAPI void  APIENTRY glDebugMessageInsertKHR(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDebugMessageInsertKHR_Idx))
	{
            GL_ENTRY_PTR(glDebugMessageInsertKHR_Idx) = dlsym(RTLD_NEXT,"glDebugMessageInsertKHR");
            if(!GL_ENTRY_PTR(glDebugMessageInsertKHR_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDebugMessageInsertKHR_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageInsertKHR_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageInsertKHR_wrp(source,type,id,severity,length,buf);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageInsertKHR_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageInsertKHR_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageInsertKHR_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageInsertKHR_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageInsertKHR_Idx));
        if(last_diff > 1000000000){
            printf("glDebugMessageInsertKHR %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageInsertKHR_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageInsertKHR_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageInsertKHR_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageInsertKHR_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageInsertKHR_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageInsertKHR_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageInsertKHR_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageInsertKHR_Idx) = get_ts();
        }


	

}