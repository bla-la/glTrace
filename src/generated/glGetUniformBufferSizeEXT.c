#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformBufferSizeEXT_wrp						\
    ((GLint  (*)(GLuint program,GLint location                                        \
    ))GL_ENTRY_PTR(glGetUniformBufferSizeEXT_Idx))


GLAPI GLint  APIENTRY glGetUniformBufferSizeEXT(GLuint program,GLint location)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformBufferSizeEXT_Idx))
	{
            GL_ENTRY_PTR(glGetUniformBufferSizeEXT_Idx) = dlsym(RTLD_NEXT,"glGetUniformBufferSizeEXT");
            if(!GL_ENTRY_PTR(glGetUniformBufferSizeEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformBufferSizeEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformBufferSizeEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glGetUniformBufferSizeEXT_wrp(program,location);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformBufferSizeEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformBufferSizeEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformBufferSizeEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformBufferSizeEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformBufferSizeEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformBufferSizeEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformBufferSizeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformBufferSizeEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformBufferSizeEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformBufferSizeEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformBufferSizeEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformBufferSizeEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformBufferSizeEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformBufferSizeEXT_Idx) = get_ts();
        }


	return retval;

}