#include <glTraceCommon.h>
#include <generated.h>

#define glUniform2fARB_wrp						\
    ((void  (*)(GLint location,GLfloat v0,GLfloat v1                                        \
    ))GL_ENTRY_PTR(glUniform2fARB_Idx))


GLAPI void  APIENTRY glUniform2fARB(GLint location,GLfloat v0,GLfloat v1)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform2fARB_Idx))
	{
            GL_ENTRY_PTR(glUniform2fARB_Idx) = dlsym(RTLD_NEXT,"glUniform2fARB");
            if(!GL_ENTRY_PTR(glUniform2fARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform2fARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform2fARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform2fARB_wrp(location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform2fARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform2fARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform2fARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform2fARB_Idx),
				 GL_ENTRY_LAST_TS(glUniform2fARB_Idx));
        if(last_diff > 1000000000){
            printf("glUniform2fARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform2fARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2fARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2fARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform2fARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform2fARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform2fARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform2fARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform2fARB_Idx) = get_ts();
        }


	

}