#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformiv_wrp						\
    ((void  (*)(GLuint program,GLint location,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetUniformiv_Idx))


GLAPI void  APIENTRY glGetUniformiv(GLuint program,GLint location,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformiv_Idx))
	{
            GL_ENTRY_PTR(glGetUniformiv_Idx) = dlsym(RTLD_NEXT,"glGetUniformiv");
            if(!GL_ENTRY_PTR(glGetUniformiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformiv_wrp(program,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformiv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformiv_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformiv_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformiv_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformiv_Idx) = get_ts();
        }


	

}