#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3f_wrp						\
    ((void  (*)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2                                        \
    ))GL_ENTRY_PTR(glUniform3f_Idx))


GLAPI void  APIENTRY glUniform3f(GLint location,GLfloat v0,GLfloat v1,GLfloat v2)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform3f_Idx))
	{
            GL_ENTRY_PTR(glUniform3f_Idx) = dlsym(RTLD_NEXT,"glUniform3f");
            if(!GL_ENTRY_PTR(glUniform3f_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform3f_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3f_wrp(location,v0,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3f_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3f_Idx),
				 GL_ENTRY_LAST_TS(glUniform3f_Idx));
        if(last_diff > 1000000000){
            printf("glUniform3f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3f_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3f_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3f_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3f_Idx) = get_ts();
        }


	

}