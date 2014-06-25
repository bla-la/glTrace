#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4uiv_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glUniform4uiv_Idx))


GLAPI void  APIENTRY glUniform4uiv(GLint location,GLsizei count,const GLuint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform4uiv_Idx))
	{
            GL_ENTRY_PTR(glUniform4uiv_Idx) = dlsym(RTLD_NEXT,"glUniform4uiv");
            if(!GL_ENTRY_PTR(glUniform4uiv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform4uiv_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4uiv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4uiv_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4uiv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4uiv_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4uiv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4uiv_Idx),
				 GL_ENTRY_LAST_TS(glUniform4uiv_Idx));
        if(last_diff > 1000000000){
            printf("glUniform4uiv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4uiv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4uiv_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4uiv_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4uiv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4uiv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4uiv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4uiv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4uiv_Idx) = get_ts();
        }


	

}