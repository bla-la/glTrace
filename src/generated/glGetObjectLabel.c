#include <glTraceCommon.h>
#include <generated.h>

#define glGetObjectLabel_wrp						\
    ((void  (*)(GLenum identifier,GLuint name,GLsizei bufSize,GLsizei *length,GLchar *label                                        \
    ))GL_ENTRY_PTR(glGetObjectLabel_Idx))


GLAPI void  APIENTRY glGetObjectLabel(GLenum identifier,GLuint name,GLsizei bufSize,GLsizei *length,GLchar *label)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetObjectLabel_Idx))
	{
            GL_ENTRY_PTR(glGetObjectLabel_Idx) = dlsym(RTLD_NEXT,"glGetObjectLabel");
            if(!GL_ENTRY_PTR(glGetObjectLabel_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetObjectLabel_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetObjectLabel_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetObjectLabel_wrp(identifier,name,bufSize,length,label);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetObjectLabel_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetObjectLabel_Idx) ++;

        GL_ENTRY_LAST_TS(glGetObjectLabel_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetObjectLabel_Idx),
				 GL_ENTRY_LAST_TS(glGetObjectLabel_Idx));
        if(last_diff > 1000000000){
            printf("glGetObjectLabel %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetObjectLabel_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectLabel_Idx),
	             GL_ENTRY_CALL_TIME(glGetObjectLabel_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetObjectLabel_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetObjectLabel_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetObjectLabel_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetObjectLabel_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetObjectLabel_Idx) = get_ts();
        }


	

}