#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4uivEXT_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glUniform4uivEXT_Idx))


GLAPI void  APIENTRY glUniform4uivEXT(GLint location,GLsizei count,const GLuint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform4uivEXT_Idx))
	{
            GL_ENTRY_PTR(glUniform4uivEXT_Idx) = dlsym(RTLD_NEXT,"glUniform4uivEXT");
            if(!GL_ENTRY_PTR(glUniform4uivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform4uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4uivEXT_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glUniform4uivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glUniform4uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4uivEXT_Idx) = get_ts();
        }


	

}