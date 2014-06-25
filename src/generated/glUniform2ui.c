#include <glTraceCommon.h>
#include <generated.h>

#define glUniform2ui_wrp						\
    ((void  (*)(GLint location,GLuint v0,GLuint v1                                        \
    ))GL_ENTRY_PTR(glUniform2ui_Idx))


GLAPI void  APIENTRY glUniform2ui(GLint location,GLuint v0,GLuint v1)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform2ui_Idx))
	{
            GL_ENTRY_PTR(glUniform2ui_Idx) = dlsym(RTLD_NEXT,"glUniform2ui");
            if(!GL_ENTRY_PTR(glUniform2ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform2ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform2ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform2ui_wrp(location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform2ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform2ui_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform2ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform2ui_Idx),
				 GL_ENTRY_LAST_TS(glUniform2ui_Idx));
        if(last_diff > 1000000000){
            printf("glUniform2ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform2ui_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2ui_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform2ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform2ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform2ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform2ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform2ui_Idx) = get_ts();
        }


	

}