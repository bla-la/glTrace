#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4iv_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLint *value                                        \
    ))GL_ENTRY_PTR(glUniform4iv_Idx))


GLAPI void  APIENTRY glUniform4iv(GLint location,GLsizei count,const GLint *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform4iv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4iv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4iv_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4iv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4iv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4iv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4iv_Idx),
				 GL_ENTRY_LAST_TS(glUniform4iv_Idx));


        if(last_diff > 1000000000){
            printf("glUniform4iv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4iv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4iv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4iv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4iv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4iv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4iv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4iv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4iv_Idx) = get_ts();
        }


	

}