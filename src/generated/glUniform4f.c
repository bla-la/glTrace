#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4f_wrp						\
    ((void  (*)(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3                                        \
    ))GL_ENTRY_PTR(glUniform4f_Idx))


GLAPI void  APIENTRY glUniform4f(GLint location,GLfloat v0,GLfloat v1,GLfloat v2,GLfloat v3)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform4f_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4f_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4f_wrp(location,v0,v1,v2,v3);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4f_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4f_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4f_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4f_Idx),
				 GL_ENTRY_LAST_TS(glUniform4f_Idx));


        if(last_diff > 1000000000){
            printf("glUniform4f %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4f_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4f_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4f_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4f_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4f_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4f_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4f_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4f_Idx) = get_ts();
        }


	

}