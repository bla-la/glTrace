#include <glTraceCommon.h>
#include <generated.h>

#define glUniform2uivEXT_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLuint *value                                        \
    ))GL_ENTRY_PTR(glUniform2uivEXT_Idx))


GLAPI void  APIENTRY glUniform2uivEXT(GLint location,GLsizei count,const GLuint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform2uivEXT_Idx))
	{
            GL_ENTRY_PTR(glUniform2uivEXT_Idx) = dlsym(RTLD_NEXT,"glUniform2uivEXT");
            if(!GL_ENTRY_PTR(glUniform2uivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform2uivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform2uivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform2uivEXT_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform2uivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform2uivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform2uivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform2uivEXT_Idx),
				 GL_ENTRY_LAST_TS(glUniform2uivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glUniform2uivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform2uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2uivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2uivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform2uivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform2uivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform2uivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform2uivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform2uivEXT_Idx) = get_ts();
        }


	

}