#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3iv_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLint *value                                        \
    ))GL_ENTRY_PTR(glUniform3iv_Idx))


GLAPI void  APIENTRY glUniform3iv(GLint location,GLsizei count,const GLint *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform3iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3iv_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3iv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3iv_Idx),
				 GL_ENTRY_LAST_TS(glUniform3iv_Idx));


        if(last_diff > 1000000000){
            printf("glUniform3iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3iv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3iv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3iv_Idx) = get_ts();
        }


	

}