#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos2ivARB_wrp						\
    ((void  (*)(const GLint *v                                        \
    ))GL_ENTRY_PTR(glWindowPos2ivARB_Idx))


GLAPI void  APIENTRY glWindowPos2ivARB(const GLint *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos2ivARB_Idx))
	{
            GL_ENTRY_PTR(glWindowPos2ivARB_Idx) = dlsym(RTLD_NEXT,"glWindowPos2ivARB");
            if(!GL_ENTRY_PTR(glWindowPos2ivARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos2ivARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos2ivARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos2ivARB_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos2ivARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos2ivARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos2ivARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos2ivARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos2ivARB_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos2ivARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos2ivARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2ivARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos2ivARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos2ivARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos2ivARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos2ivARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos2ivARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos2ivARB_Idx) = get_ts();
        }


	

}