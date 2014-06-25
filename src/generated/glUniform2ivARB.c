#include <glTraceCommon.h>
#include <generated.h>

#define glUniform2ivARB_wrp						\
    ((void  (*)(GLint location,GLsizei count,const GLint *value                                        \
    ))GL_ENTRY_PTR(glUniform2ivARB_Idx))


GLAPI void  APIENTRY glUniform2ivARB(GLint location,GLsizei count,const GLint *value)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform2ivARB_Idx))
	{
            GL_ENTRY_PTR(glUniform2ivARB_Idx) = dlsym(RTLD_NEXT,"glUniform2ivARB");
            if(!GL_ENTRY_PTR(glUniform2ivARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform2ivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform2ivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform2ivARB_wrp(location,count,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform2ivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform2ivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform2ivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform2ivARB_Idx),
				 GL_ENTRY_LAST_TS(glUniform2ivARB_Idx));
        if(last_diff > 1000000000){
            printf("glUniform2ivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform2ivARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2ivARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2ivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform2ivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform2ivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform2ivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform2ivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform2ivARB_Idx) = get_ts();
        }


	

}