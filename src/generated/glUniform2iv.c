#include <glTraceCommon.h>
#include <generated.h>

#define glUniform2iv_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLint *value                                        \
    ))GL_ENTRY_PTR(glUniform2iv_Idx))


GLAPI void  APIENTRY glUniform2iv(GLint location,GLsizei count,const GLint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform2iv_Idx))
	{
            GL_ENTRY_PTR(glUniform2iv_Idx) = dlsym(RTLD_NEXT,"glUniform2iv");
            if(!GL_ENTRY_PTR(glUniform2iv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform2iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform2iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform2iv_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform2iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform2iv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform2iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform2iv_Idx),
				 GL_ENTRY_LAST_TS(glUniform2iv_Idx));
        if(last_diff > 1000000000){
            printf("glUniform2iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform2iv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2iv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform2iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform2iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform2iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform2iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform2iv_Idx) = get_ts();
        }


	

}