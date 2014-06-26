#include <glTraceCommon.h>
#include <generated.h>

#define glDrawArraysInstancedBaseInstance_wrp						\
    ((void  (*)(GLenum mode,GLint first,GLsizei count,GLsizei instancecount,GLuint baseinstance                                        \
    ))GL_ENTRY_PTR(glDrawArraysInstancedBaseInstance_Idx))


GLAPI void  APIENTRY glDrawArraysInstancedBaseInstance(GLenum mode,GLint first,GLsizei count,GLsizei instancecount,GLuint baseinstance)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawArraysInstancedBaseInstance_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawArraysInstancedBaseInstance_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawArraysInstancedBaseInstance_wrp(mode,first,count,instancecount,baseinstance);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawArraysInstancedBaseInstance_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawArraysInstancedBaseInstance_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawArraysInstancedBaseInstance_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawArraysInstancedBaseInstance_Idx),
				 GL_ENTRY_LAST_TS(glDrawArraysInstancedBaseInstance_Idx));


        if(last_diff > 1000000000){
            printf("glDrawArraysInstancedBaseInstance %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedBaseInstance_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedBaseInstance_Idx),
	             GL_ENTRY_CALL_TIME(glDrawArraysInstancedBaseInstance_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedBaseInstance_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawArraysInstancedBaseInstance_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawArraysInstancedBaseInstance_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawArraysInstancedBaseInstance_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawArraysInstancedBaseInstance_Idx) = get_ts();
        }


	

}