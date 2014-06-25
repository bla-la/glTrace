#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformfv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetUniformfv_Idx))


GLAPI void  APIENTRY glGetUniformfv(GLuint program,GLint location,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformfv_Idx))
	{
            GL_ENTRY_PTR(glGetUniformfv_Idx) = dlsym(RTLD_NEXT,"glGetUniformfv");
            if(!GL_ENTRY_PTR(glGetUniformfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformfv_wrp(program,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformfv_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformfv_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformfv_Idx) = get_ts();
        }


	

}