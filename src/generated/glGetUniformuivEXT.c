#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformuivEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint *params                                        \
    ))GL_ENTRY_PTR(glGetUniformuivEXT_Idx))


GLAPI void  APIENTRY glGetUniformuivEXT(GLuint program,GLint location,GLuint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformuivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetUniformuivEXT_Idx) = dlsym(RTLD_NEXT,"glGetUniformuivEXT");
            if(!GL_ENTRY_PTR(glGetUniformuivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformuivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformuivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformuivEXT_wrp(program,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformuivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformuivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformuivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformuivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformuivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformuivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformuivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformuivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformuivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformuivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformuivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformuivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformuivEXT_Idx) = get_ts();
        }


	

}