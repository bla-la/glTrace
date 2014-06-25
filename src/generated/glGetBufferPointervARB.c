#include <glTraceCommon.h>
#include <generated.h>

#define glGetBufferPointervARB_wrp						\
    ((void  (*)(GLenum target,GLenum pname,void **params                                        \
    ))GL_ENTRY_PTR(glGetBufferPointervARB_Idx))


GLAPI void  APIENTRY glGetBufferPointervARB(GLenum target,GLenum pname,void **params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetBufferPointervARB_Idx))
	{
            GL_ENTRY_PTR(glGetBufferPointervARB_Idx) = dlsym(RTLD_NEXT,"glGetBufferPointervARB");
            if(!GL_ENTRY_PTR(glGetBufferPointervARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetBufferPointervARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetBufferPointervARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetBufferPointervARB_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetBufferPointervARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetBufferPointervARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetBufferPointervARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetBufferPointervARB_Idx),
				 GL_ENTRY_LAST_TS(glGetBufferPointervARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetBufferPointervARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetBufferPointervARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferPointervARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetBufferPointervARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetBufferPointervARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetBufferPointervARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetBufferPointervARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetBufferPointervARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetBufferPointervARB_Idx) = get_ts();
        }


	

}