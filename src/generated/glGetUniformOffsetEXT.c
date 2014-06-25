#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformOffsetEXT_wrp						\
    ((GLintptr  (*)(GLuint program,GLint location                                        \
    ))GL_ENTRY_PTR(glGetUniformOffsetEXT_Idx))


GLAPI GLintptr  APIENTRY glGetUniformOffsetEXT(GLuint program,GLint location)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetUniformOffsetEXT_Idx))
	{
            GL_ENTRY_PTR(glGetUniformOffsetEXT_Idx) = dlsym(RTLD_NEXT,"glGetUniformOffsetEXT");
            if(!GL_ENTRY_PTR(glGetUniformOffsetEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetUniformOffsetEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformOffsetEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLintptr  retval = glGetUniformOffsetEXT_wrp(program,location);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformOffsetEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformOffsetEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformOffsetEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformOffsetEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformOffsetEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetUniformOffsetEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformOffsetEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformOffsetEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformOffsetEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformOffsetEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformOffsetEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformOffsetEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformOffsetEXT_Idx) = get_ts();
        }


	return retval;

}