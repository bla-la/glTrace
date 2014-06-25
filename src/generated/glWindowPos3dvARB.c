#include <glTraceCommon.h>
#include <generated.h>

#define glWindowPos3dvARB_wrp						\
    ((void  (*)(const GLdouble *v                                        \
    ))GL_ENTRY_PTR(glWindowPos3dvARB_Idx))


GLAPI void  APIENTRY glWindowPos3dvARB(const GLdouble *v)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glWindowPos3dvARB_Idx))
	{
            GL_ENTRY_PTR(glWindowPos3dvARB_Idx) = dlsym(RTLD_NEXT,"glWindowPos3dvARB");
            if(!GL_ENTRY_PTR(glWindowPos3dvARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glWindowPos3dvARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glWindowPos3dvARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glWindowPos3dvARB_wrp(v);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glWindowPos3dvARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glWindowPos3dvARB_Idx) ++;

        GL_ENTRY_LAST_TS(glWindowPos3dvARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glWindowPos3dvARB_Idx),
				 GL_ENTRY_LAST_TS(glWindowPos3dvARB_Idx));
        if(last_diff > 1000000000){
            printf("glWindowPos3dvARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glWindowPos3dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3dvARB_Idx),
	             GL_ENTRY_CALL_TIME(glWindowPos3dvARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glWindowPos3dvARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glWindowPos3dvARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glWindowPos3dvARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glWindowPos3dvARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glWindowPos3dvARB_Idx) = get_ts();
        }


	

}