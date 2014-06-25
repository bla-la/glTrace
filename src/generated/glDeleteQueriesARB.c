#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteQueriesARB_wrp						\
    ((void  (*)(GLsizei n,const GLuint *ids                                        \
    ))GL_ENTRY_PTR(glDeleteQueriesARB_Idx))


GLAPI void  APIENTRY glDeleteQueriesARB(GLsizei n,const GLuint *ids)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteQueriesARB_Idx))
	{
            GL_ENTRY_PTR(glDeleteQueriesARB_Idx) = dlsym(RTLD_NEXT,"glDeleteQueriesARB");
            if(!GL_ENTRY_PTR(glDeleteQueriesARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteQueriesARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteQueriesARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteQueriesARB_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteQueriesARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteQueriesARB_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteQueriesARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteQueriesARB_Idx),
				 GL_ENTRY_LAST_TS(glDeleteQueriesARB_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteQueriesARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteQueriesARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteQueriesARB_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteQueriesARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteQueriesARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteQueriesARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteQueriesARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteQueriesARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteQueriesARB_Idx) = get_ts();
        }


	

}