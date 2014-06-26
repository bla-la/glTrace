#include <glTraceCommon.h>
#include <generated.h>

#define glProgramEnvParameters4fvEXT_wrp						\
    ((void  (*)(GLenum target,GLuint index,GLsizei count,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glProgramEnvParameters4fvEXT_Idx))


GLAPI void  APIENTRY glProgramEnvParameters4fvEXT(GLenum target,GLuint index,GLsizei count,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glProgramEnvParameters4fvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glProgramEnvParameters4fvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glProgramEnvParameters4fvEXT_wrp(target,index,count,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glProgramEnvParameters4fvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glProgramEnvParameters4fvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glProgramEnvParameters4fvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glProgramEnvParameters4fvEXT_Idx),
				 GL_ENTRY_LAST_TS(glProgramEnvParameters4fvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glProgramEnvParameters4fvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameters4fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameters4fvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glProgramEnvParameters4fvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glProgramEnvParameters4fvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glProgramEnvParameters4fvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glProgramEnvParameters4fvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glProgramEnvParameters4fvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glProgramEnvParameters4fvEXT_Idx) = get_ts();
        }


	

}