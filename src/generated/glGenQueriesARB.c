#include <glTraceCommon.h>
#include <generated.h>

#define glGenQueriesARB_wrp						\
    ((void  (*)(GLsizei n,GLuint *ids                                        \
    ))GL_ENTRY_PTR(glGenQueriesARB_Idx))


GLAPI void  APIENTRY glGenQueriesARB(GLsizei n,GLuint *ids)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenQueriesARB_Idx))
	{
            GL_ENTRY_PTR(glGenQueriesARB_Idx) = dlsym(RTLD_NEXT,"glGenQueriesARB");
            if(!GL_ENTRY_PTR(glGenQueriesARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenQueriesARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenQueriesARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenQueriesARB_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenQueriesARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenQueriesARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGenQueriesARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenQueriesARB_Idx),
				 GL_ENTRY_LAST_TS(glGenQueriesARB_Idx));
        if(last_diff > 1000000000){
            printf("glGenQueriesARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenQueriesARB_Idx),
	             GL_ENTRY_CALL_TIME(glGenQueriesARB_Idx),
	             GL_ENTRY_CALL_TIME(glGenQueriesARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenQueriesARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenQueriesARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenQueriesARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenQueriesARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenQueriesARB_Idx) = get_ts();
        }


	

}