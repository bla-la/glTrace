#include <glTraceCommon.h>
#include <generated.h>

#define glUniformMatrix3x2dv_wrp						\
    ((void  (*)(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value                                        \
    ))GL_ENTRY_PTR(glUniformMatrix3x2dv_Idx))


GLAPI void  APIENTRY glUniformMatrix3x2dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniformMatrix3x2dv_Idx))
	{
            GL_ENTRY_PTR(glUniformMatrix3x2dv_Idx) = dlsym(RTLD_NEXT,"glUniformMatrix3x2dv");
            if(!GL_ENTRY_PTR(glUniformMatrix3x2dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniformMatrix3x2dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformMatrix3x2dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformMatrix3x2dv_wrp(location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformMatrix3x2dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformMatrix3x2dv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformMatrix3x2dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformMatrix3x2dv_Idx),
				 GL_ENTRY_LAST_TS(glUniformMatrix3x2dv_Idx));
        if(last_diff > 1000000000){
            printf("glUniformMatrix3x2dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformMatrix3x2dv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix3x2dv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix3x2dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformMatrix3x2dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformMatrix3x2dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformMatrix3x2dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformMatrix3x2dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformMatrix3x2dv_Idx) = get_ts();
        }


	

}