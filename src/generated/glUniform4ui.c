#include <glTraceCommon.h>
#include <generated.h>

#define glUniform4ui_wrp						\
    ((void  (*)(GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3                                        \
    ))GL_ENTRY_PTR(glUniform4ui_Idx))


GLAPI void  APIENTRY glUniform4ui(GLint location,GLuint v0,GLuint v1,GLuint v2,GLuint v3)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glUniform4ui_Idx))
	{
            GL_ENTRY_PTR(glUniform4ui_Idx) = dlsym(RTLD_NEXT,"glUniform4ui");
            if(!GL_ENTRY_PTR(glUniform4ui_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glUniform4ui_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform4ui_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform4ui_wrp(location,v0,v1,v2,v3);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform4ui_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform4ui_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform4ui_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform4ui_Idx),
				 GL_ENTRY_LAST_TS(glUniform4ui_Idx));
        if(last_diff > 1000000000){
            printf("glUniform4ui %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform4ui_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4ui_Idx),
	             GL_ENTRY_CALL_TIME(glUniform4ui_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform4ui_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform4ui_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform4ui_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform4ui_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform4ui_Idx) = get_ts();
        }


	

}