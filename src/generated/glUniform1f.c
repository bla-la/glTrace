#include <glTraceCommon.h>
#include <generated.h>

#define glUniform1f_wrp						\
    ((void  (*)(GLint location,GLfloat v0                                        \
    ))GL_ENTRY_PTR(glUniform1f_Idx))


GLAPI void  APIENTRY glUniform1f(GLint location,GLfloat v0)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform1f_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform1f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform1f_wrp(location,v0);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform1f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform1f_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform1f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform1f_Idx),
				 GL_ENTRY_LAST_TS(glUniform1f_Idx));


        if(last_diff > 1000000000){
            printf("glUniform1f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform1f_Idx),
	             GL_ENTRY_CALL_TIME(glUniform1f_Idx),
	             GL_ENTRY_CALL_TIME(glUniform1f_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform1f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform1f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform1f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform1f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform1f_Idx) = get_ts();
        }


	

}