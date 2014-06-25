#include <glTraceCommon.h>
#include <generated.h>

#define glUniform1i_wrp						\
    ((void  (*)(GLint location,GLint v0                                        \
    ))GL_ENTRY_PTR(glUniform1i_Idx))


GLAPI void  APIENTRY glUniform1i(GLint location,GLint v0)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform1i_Idx))
	{
            GL_ENTRY_PTR(glUniform1i_Idx) = dlsym(RTLD_NEXT,"glUniform1i");
            if(!GL_ENTRY_PTR(glUniform1i_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform1i_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform1i_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform1i_wrp(location,v0);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform1i_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform1i_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform1i_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform1i_Idx),
				 GL_ENTRY_LAST_TS(glUniform1i_Idx));
        if(last_diff > 1000000000){
            printf("glUniform1i %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform1i_Idx),
	             GL_ENTRY_CALL_TIME(glUniform1i_Idx),
	             GL_ENTRY_CALL_TIME(glUniform1i_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform1i_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform1i_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform1i_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform1i_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform1i_Idx) = get_ts();
        }


	

}