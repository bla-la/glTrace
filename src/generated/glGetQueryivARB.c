#include <glTraceCommon.h>
#include <generated.h>

#define glGetQueryivARB_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetQueryivARB_Idx))


GLAPI void  APIENTRY glGetQueryivARB(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetQueryivARB_Idx))
	{
            GL_ENTRY_PTR(glGetQueryivARB_Idx) = dlsym(RTLD_NEXT,"glGetQueryivARB");
            if(!GL_ENTRY_PTR(glGetQueryivARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetQueryivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetQueryivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetQueryivARB_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetQueryivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetQueryivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetQueryivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetQueryivARB_Idx),
				 GL_ENTRY_LAST_TS(glGetQueryivARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetQueryivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetQueryivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryivARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetQueryivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetQueryivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetQueryivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetQueryivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetQueryivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetQueryivARB_Idx) = get_ts();
        }


	

}