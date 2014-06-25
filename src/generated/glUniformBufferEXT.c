#include <glTraceCommon.h>
#include <generated.h>

#define glUniformBufferEXT_wrp						\
    ((void  (*)(GLuint program,GLint location,GLuint buffer                                        \
    ))GL_ENTRY_PTR(glUniformBufferEXT_Idx))


GLAPI void  APIENTRY glUniformBufferEXT(GLuint program,GLint location,GLuint buffer)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniformBufferEXT_Idx))
	{
            GL_ENTRY_PTR(glUniformBufferEXT_Idx) = dlsym(RTLD_NEXT,"glUniformBufferEXT");
            if(!GL_ENTRY_PTR(glUniformBufferEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniformBufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformBufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformBufferEXT_wrp(program,location,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformBufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformBufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformBufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformBufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glUniformBufferEXT_Idx));
        if(last_diff > 1000000000){
            printf("glUniformBufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUniformBufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUniformBufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformBufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformBufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformBufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformBufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformBufferEXT_Idx) = get_ts();
        }


	

}