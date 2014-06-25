#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformuiv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetUniformuiv_Idx))


GLAPI void  APIENTRY glGetUniformuiv(GLuint program,GLint location,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformuiv_Idx))
	{
            GL_ENTRY_PTR(glGetUniformuiv_Idx) = dlsym(RTLD_NEXT,"glGetUniformuiv");
            if(!GL_ENTRY_PTR(glGetUniformuiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformuiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformuiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformuiv_wrp(program,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformuiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformuiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformuiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformuiv_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformuiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformuiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformuiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformuiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformuiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformuiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformuiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformuiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformuiv_Idx) = get_ts();
        }


	

}