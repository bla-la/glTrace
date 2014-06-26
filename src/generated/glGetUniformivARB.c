#include <glTraceCommon.h>
#include <generated.h>

#define glGetUniformivARB_wrp						\
    ((void  (*)(GLhandleARB programObj,GLint location,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetUniformivARB_Idx))


GLAPI void  APIENTRY glGetUniformivARB(GLhandleARB programObj,GLint location,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetUniformivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetUniformivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetUniformivARB_wrp(programObj,location,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetUniformivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetUniformivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetUniformivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetUniformivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetUniformivARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetUniformivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetUniformivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetUniformivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetUniformivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetUniformivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetUniformivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetUniformivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetUniformivARB_Idx) = get_ts();
        }


	

}