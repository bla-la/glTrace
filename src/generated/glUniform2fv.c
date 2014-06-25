#include <glTraceCommon.h>
#include <generated.h>

#define glUniform2fv_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glUniform2fv_Idx))


GLAPI void  APIENTRY glUniform2fv(GLint location,GLsizei count,const GLfloat *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform2fv_Idx))
	{
            GL_ENTRY_PTR(glUniform2fv_Idx) = dlsym(RTLD_NEXT,"glUniform2fv");
            if(!GL_ENTRY_PTR(glUniform2fv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform2fv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform2fv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform2fv_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform2fv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform2fv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform2fv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform2fv_Idx),
				 GL_ENTRY_LAST_TS(glUniform2fv_Idx));
        if(last_diff > 1000000000){
            printf("glUniform2fv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform2fv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2fv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2fv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform2fv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform2fv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform2fv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform2fv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform2fv_Idx) = get_ts();
        }


	

}