#include <glTraceCommon.h>
#include <generated.h>

#define glUniformMatrix2x3dv_wrp						\
    ((void  (*)(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value                                        \
    ))GL_ENTRY_PTR(glUniformMatrix2x3dv_Idx))


GLAPI void  APIENTRY glUniformMatrix2x3dv(GLint location,GLsizei count,GLboolean transpose,const GLdouble *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniformMatrix2x3dv_Idx))
	{
            GL_ENTRY_PTR(glUniformMatrix2x3dv_Idx) = dlsym(RTLD_NEXT,"glUniformMatrix2x3dv");
            if(!GL_ENTRY_PTR(glUniformMatrix2x3dv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniformMatrix2x3dv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformMatrix2x3dv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformMatrix2x3dv_wrp(location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformMatrix2x3dv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformMatrix2x3dv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformMatrix2x3dv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformMatrix2x3dv_Idx),
				 GL_ENTRY_LAST_TS(glUniformMatrix2x3dv_Idx));
        if(last_diff > 1000000000){
            printf("glUniformMatrix2x3dv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformMatrix2x3dv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix2x3dv_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix2x3dv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformMatrix2x3dv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformMatrix2x3dv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformMatrix2x3dv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformMatrix2x3dv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformMatrix2x3dv_Idx) = get_ts();
        }


	

}