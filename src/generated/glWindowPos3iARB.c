#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3iARB_wrp						\
    ((void  (*)(GLint x,GLint y,GLint z                                        \
    ))GL_ENTRY_PTR(glWindowPos3iARB_Idx))


GLAPI void  APIENTRY glWindowPos3iARB(GLint x,GLint y,GLint z)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos3iARB_Idx))
	{
            GL_ENTRY_PTR(glWindowPos3iARB_Idx) = dlsym(RTLD_NEXT,"glWindowPos3iARB");
            if(!GL_ENTRY_PTR(glWindowPos3iARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos3iARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3iARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3iARB_wrp(x,y,z);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3iARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3iARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3iARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3iARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3iARB_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos3iARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3iARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3iARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3iARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3iARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3iARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3iARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3iARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3iARB_Idx) = get_ts();
        }


	

}