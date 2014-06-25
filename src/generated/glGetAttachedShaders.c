#include <glTraceCommon.h>
#include <generated.h>

#define glGetAttachedShaders_wrp						\
    ((void  (*)(GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders                                        \
    ))GL_ENTRY_PTR(glGetAttachedShaders_Idx))


GLAPI void  APIENTRY glGetAttachedShaders(GLuint program,GLsizei maxCount,GLsizei *count,GLuint *shaders)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetAttachedShaders_Idx))
	{
            GL_ENTRY_PTR(glGetAttachedShaders_Idx) = dlsym(RTLD_NEXT,"glGetAttachedShaders");
            if(!GL_ENTRY_PTR(glGetAttachedShaders_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetAttachedShaders_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetAttachedShaders_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetAttachedShaders_wrp(program,maxCount,count,shaders);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetAttachedShaders_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetAttachedShaders_Idx) ++;

        GL_ENTRY_LAST_TS(glGetAttachedShaders_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetAttachedShaders_Idx),
				 GL_ENTRY_LAST_TS(glGetAttachedShaders_Idx));
        if(last_diff > 1000000000){
            printf("glGetAttachedShaders %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetAttachedShaders_Idx),
	             GL_ENTRY_CALL_TIME(glGetAttachedShaders_Idx),
	             GL_ENTRY_CALL_TIME(glGetAttachedShaders_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetAttachedShaders_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetAttachedShaders_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetAttachedShaders_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetAttachedShaders_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetAttachedShaders_Idx) = get_ts();
        }


	

}