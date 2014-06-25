#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4fv_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glUniform4fv_Idx))


GLAPI void  APIENTRY glUniform4fv(GLint location,GLsizei count,const GLfloat *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform4fv_Idx))
	{
            GL_ENTRY_PTR(glUniform4fv_Idx) = dlsym(RTLD_NEXT,"glUniform4fv");
            if(!GL_ENTRY_PTR(glUniform4fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform4fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4fv_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4fv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4fv_Idx),
				 GL_ENTRY_LAST_TS(glUniform4fv_Idx));
        if(last_diff > 1000000000){
            printf("glUniform4fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4fv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4fv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4fv_Idx) = get_ts();
        }


	

}