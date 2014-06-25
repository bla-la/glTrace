#include <glTraceCommon.h>
#include <generated.h>

#define glDebugMessageInsert_wrp						\
    ((void  (*)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf                                        \
    ))GL_ENTRY_PTR(glDebugMessageInsert_Idx))


GLAPI void  APIENTRY glDebugMessageInsert(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *buf)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDebugMessageInsert_Idx))
	{
            GL_ENTRY_PTR(glDebugMessageInsert_Idx) = dlsym(RTLD_NEXT,"glDebugMessageInsert");
            if(!GL_ENTRY_PTR(glDebugMessageInsert_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDebugMessageInsert_Idx))
    	{
            GL_ENTRY_PREV_TS(glDebugMessageInsert_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDebugMessageInsert_wrp(source,type,id,severity,length,buf);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDebugMessageInsert_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDebugMessageInsert_Idx) ++;

        GL_ENTRY_LAST_TS(glDebugMessageInsert_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDebugMessageInsert_Idx),
				 GL_ENTRY_LAST_TS(glDebugMessageInsert_Idx));
        if(last_diff > 1000000000){
            printf("glDebugMessageInsert %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDebugMessageInsert_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageInsert_Idx),
	             GL_ENTRY_CALL_TIME(glDebugMessageInsert_Idx) /
	             GL_ENTRY_CALL_COUNT(glDebugMessageInsert_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDebugMessageInsert_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDebugMessageInsert_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDebugMessageInsert_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDebugMessageInsert_Idx) = get_ts();
        }


	

}