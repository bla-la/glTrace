#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageEnableAMD_wrp						\
    ((void  (*)(GLenum category,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled                                        \
    ))GL_ENTRY_PTR(glDebugMessageEnableAMD_Idx))


GLAPI void  APIENTRY glDebugMessageEnableAMD(GLenum category,GLenum severity,GLsizei count,const GLuint *ids,GLboolean enabled)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDebugMessageEnableAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageEnableAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageEnableAMD_wrp(category,severity,count,ids,enabled);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageEnableAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageEnableAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageEnableAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageEnableAMD_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageEnableAMD_Idx));


        if(last_diff > 1000000000){
            printf("glDebugMessageEnableAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageEnableAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageEnableAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageEnableAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageEnableAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageEnableAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageEnableAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageEnableAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageEnableAMD_Idx) = get_ts();
        }


	

}