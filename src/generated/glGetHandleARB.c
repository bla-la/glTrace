#include <glTraceCommon.h>
#include <generated.h>

#define glGetHandleARB_wrp						\
    ((GLhandleARB  (*)(GLenum pname                                        \
    ))GL_ENTRY_PTR(glGetHandleARB_Idx))


GLAPI GLhandleARB  APIENTRY glGetHandleARB(GLenum pname)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetHandleARB_Idx))
	{
            GL_ENTRY_PTR(glGetHandleARB_Idx) = dlsym(RTLD_NEXT,"glGetHandleARB");
            if(!GL_ENTRY_PTR(glGetHandleARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetHandleARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetHandleARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLhandleARB  retval = glGetHandleARB_wrp(pname);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetHandleARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetHandleARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetHandleARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetHandleARB_Idx),
				 GL_ENTRY_LAST_TS(glGetHandleARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetHandleARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetHandleARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetHandleARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetHandleARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetHandleARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetHandleARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetHandleARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetHandleARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetHandleARB_Idx) = get_ts();
        }


	return retval;

}