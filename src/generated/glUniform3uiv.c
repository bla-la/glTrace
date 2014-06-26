#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3uiv_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glUniform3uiv_Idx))


GLAPI void  APIENTRY glUniform3uiv(GLint location,GLsizei count,const GLuint *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform3uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3uiv_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3uiv_Idx),
				 GL_ENTRY_LAST_TS(glUniform3uiv_Idx));


        if(last_diff > 1000000000){
            printf("glUniform3uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3uiv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3uiv_Idx) = get_ts();
        }


	

}