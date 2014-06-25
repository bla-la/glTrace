#include <glTraceCommon.h>
#include <generated.h>

#define glUniformMatrix4dv_wrp						\
    ((void  (*)(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value                                        \
    ))GL_ENTRY_PTR(glUniformMatrix4dv_Idx))


GLAPI void  APIENTRY glUniformMatrix4dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniformMatrix4dv_Idx))
	{
            GL_ENTRY_PTR(glUniformMatrix4dv_Idx) = dlsym(RTLD_NEXT,"glUniformMatrix4dv");
            if(!GL_ENTRY_PTR(glUniformMatrix4dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniformMatrix4dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformMatrix4dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformMatrix4dv_wrp(location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformMatrix4dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformMatrix4dv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformMatrix4dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformMatrix4dv_Idx),
				 GL_ENTRY_LAST_TS(glUniformMatrix4dv_Idx));
        if(last_diff > 1000000000){
            printf("glUniformMatrix4dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformMatrix4dv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix4dv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix4dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformMatrix4dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformMatrix4dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformMatrix4dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformMatrix4dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformMatrix4dv_Idx) = get_ts();
        }


	

}