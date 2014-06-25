#include <glTraceCommon.h>
#include <generated.h>

#define glUniformMatrix2x4fv_wrp						\
    ((void  (*)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glUniformMatrix2x4fv_Idx))


GLAPI void  APIENTRY glUniformMatrix2x4fv(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniformMatrix2x4fv_Idx))
	{
            GL_ENTRY_PTR(glUniformMatrix2x4fv_Idx) = dlsym(RTLD_NEXT,"glUniformMatrix2x4fv");
            if(!GL_ENTRY_PTR(glUniformMatrix2x4fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniformMatrix2x4fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformMatrix2x4fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformMatrix2x4fv_wrp(location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformMatrix2x4fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformMatrix2x4fv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformMatrix2x4fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformMatrix2x4fv_Idx),
				 GL_ENTRY_LAST_TS(glUniformMatrix2x4fv_Idx));
        if(last_diff > 1000000000){
            printf("glUniformMatrix2x4fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformMatrix2x4fv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix2x4fv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix2x4fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformMatrix2x4fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformMatrix2x4fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformMatrix2x4fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformMatrix2x4fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformMatrix2x4fv_Idx) = get_ts();
        }


	

}