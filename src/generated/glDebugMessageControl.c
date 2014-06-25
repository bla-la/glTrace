#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageControl_wrp						\
    ((void  (*)(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled                                        \
    ))GL_ENTRY_PTR(glDebugMessageControl_Idx))


GLAPI void  APIENTRY glDebugMessageControl(GLenum source,GLenum type,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDebugMessageControl_Idx))
	{
            GL_ENTRY_PTR(glDebugMessageControl_Idx) = dlsym(RTLD_NEXT,"glDebugMessageControl");
            if(!GL_ENTRY_PTR(glDebugMessageControl_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDebugMessageControl_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageControl_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageControl_wrp(source,type,severity,count,ids,enabled);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageControl_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageControl_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageControl_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageControl_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageControl_Idx));
        if(last_diff > 1000000000){
            printf("glDebugMessageControl %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageControl_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageControl_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageControl_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageControl_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageControl_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageControl_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageControl_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageControl_Idx) = get_ts();
        }


	

}