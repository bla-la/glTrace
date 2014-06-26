#include <glTraceCommon.h>
#include <generated.h>

#define glUniform2iARB_wrp						\
    ((void  (*)(GLint location,GLint v0,GLint v1                                        \
    ))GL_ENTRY_PTR(glUniform2iARB_Idx))


GLAPI void  APIENTRY glUniform2iARB(GLint location,GLint v0,GLint v1)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glUniform2iARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glUniform2iARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glUniform2iARB_wrp(location,v0,v1);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glUniform2iARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glUniform2iARB_Idx) ++;

        GL_ENTRY_LAST_TS(glUniform2iARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glUniform2iARB_Idx),
				 GL_ENTRY_LAST_TS(glUniform2iARB_Idx));


        if(last_diff > 1000000000){
            printf("glUniform2iARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glUniform2iARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2iARB_Idx),
	             GL_ENTRY_CALL_TIME(glUniform2iARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glUniform2iARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glUniform2iARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glUniform2iARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glUniform2iARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glUniform2iARB_Idx) = get_ts();
        }


	

}