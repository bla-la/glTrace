#include <glTraceCommon.h>
#include <generated.h>

#define glGetProgramivARB_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetProgramivARB_Idx))


GLAPI void  APIENTRY glGetProgramivARB(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetProgramivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetProgramivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetProgramivARB_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetProgramivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetProgramivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetProgramivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetProgramivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetProgramivARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetProgramivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetProgramivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetProgramivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetProgramivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetProgramivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetProgramivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetProgramivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetProgramivARB_Idx) = get_ts();
        }


	

}