#include <glTraceCommon.h>
#include <generated.h>

#define glUniform1ui_wrp						\
    ((void  (*)(GLint location,GLuint v0                                        \
    ))GL_ENTRY_PTR(glUniform1ui_Idx))


GLAPI void  APIENTRY glUniform1ui(GLint location,GLuint v0)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform1ui_Idx))
	{
            GL_ENTRY_PTR(glUniform1ui_Idx) = dlsym(RTLD_NEXT,"glUniform1ui");
            if(!GL_ENTRY_PTR(glUniform1ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform1ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform1ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform1ui_wrp(location,v0);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform1ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform1ui_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform1ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform1ui_Idx),
				 GL_ENTRY_LAST_TS(glUniform1ui_Idx));
        if(last_diff > 1000000000){
            printf("glUniform1ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform1ui_Idx),
	             GL_ENTRY_CALL_TIME(glUniform1ui_Idx),
	             GL_ENTRY_CALL_TIME(glUniform1ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform1ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform1ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform1ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform1ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform1ui_Idx) = get_ts();
        }


	

}