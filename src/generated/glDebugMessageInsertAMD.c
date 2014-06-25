#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageInsertAMD_wrp						\
    ((void  (*)(GLenum category,GLenum severity,GLuint id,GLsizei length,const GLchar *buf                                        \
    ))GL_ENTRY_PTR(glDebugMessageInsertAMD_Idx))


GLAPI void  APIENTRY glDebugMessageInsertAMD(GLenum category,GLenum severity,GLuint id,GLsizei length,const GLchar *buf)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDebugMessageInsertAMD_Idx))
	{
            GL_ENTRY_PTR(glDebugMessageInsertAMD_Idx) = dlsym(RTLD_NEXT,"glDebugMessageInsertAMD");
            if(!GL_ENTRY_PTR(glDebugMessageInsertAMD_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDebugMessageInsertAMD_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageInsertAMD_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageInsertAMD_wrp(category,severity,id,length,buf);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageInsertAMD_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageInsertAMD_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageInsertAMD_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageInsertAMD_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageInsertAMD_Idx));
        if(last_diff > 1000000000){
            printf("glDebugMessageInsertAMD %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageInsertAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageInsertAMD_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageInsertAMD_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageInsertAMD_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageInsertAMD_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageInsertAMD_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageInsertAMD_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageInsertAMD_Idx) = get_ts();
        }


	

}