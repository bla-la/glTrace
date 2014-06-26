#include <glTraceCommon.h>
#include <generated.h>

#define glUniformMatrix2fvARB_wrp						\
    ((void  (*)(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value                                        \
    ))GL_ENTRY_PTR(glUniformMatrix2fvARB_Idx))


GLAPI void  APIENTRY glUniformMatrix2fvARB(GLint location,GLsizei count,GLboolean transpose,const GLfloat *value)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniformMatrix2fvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniformMatrix2fvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniformMatrix2fvARB_wrp(location,count,transpose,value);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniformMatrix2fvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniformMatrix2fvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniformMatrix2fvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniformMatrix2fvARB_Idx),
				 GL_ENTRY_LAST_TS(glUniformMatrix2fvARB_Idx));


        if(last_diff > 1000000000){
            printf("glUniformMatrix2fvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniformMatrix2fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix2fvARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniformMatrix2fvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniformMatrix2fvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniformMatrix2fvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniformMatrix2fvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniformMatrix2fvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniformMatrix2fvARB_Idx) = get_ts();
        }


	

}