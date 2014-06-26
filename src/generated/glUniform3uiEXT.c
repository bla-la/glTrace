#include <glTraceCommon.h>
#include <generated.h>

#define glUniform3uiEXT_wrp						\
    ((void  (*)(GLint location,GLuint v0,GLuint v1,GLuint v2                                        \
    ))GL_ENTRY_PTR(glUniform3uiEXT_Idx))


GLAPI void  APIENTRY glUniform3uiEXT(GLint location,GLuint v0,GLuint v1,GLuint v2)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform3uiEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform3uiEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform3uiEXT_wrp(location,v0,v1,v2);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform3uiEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform3uiEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform3uiEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform3uiEXT_Idx),
				 GL_ENTRY_LAST_TS(glUniform3uiEXT_Idx));


        if(last_diff > 1000000000){
            printf("glUniform3uiEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform3uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3uiEXT_Idx),
	             GL_ENTRY_CALL_TIME(glUniform3uiEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform3uiEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform3uiEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform3uiEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform3uiEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform3uiEXT_Idx) = get_ts();
        }


	

}