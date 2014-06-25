#include <glTraceCommon.h>
#include <generated.h>

#define glGenQueriesEXT_wrp						\
    ((void  (*)(GLsizei n,GLuint *ids                                        \
    ))GL_ENTRY_PTR(glGenQueriesEXT_Idx))


GLAPI void  APIENTRY glGenQueriesEXT(GLsizei n,GLuint *ids)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenQueriesEXT_Idx))
	{
            GL_ENTRY_PTR(glGenQueriesEXT_Idx) = dlsym(RTLD_NEXT,"glGenQueriesEXT");
            if(!GL_ENTRY_PTR(glGenQueriesEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenQueriesEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenQueriesEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenQueriesEXT_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenQueriesEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenQueriesEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGenQueriesEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenQueriesEXT_Idx),
				 GL_ENTRY_LAST_TS(glGenQueriesEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGenQueriesEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenQueriesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenQueriesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGenQueriesEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenQueriesEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenQueriesEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenQueriesEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenQueriesEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenQueriesEXT_Idx) = get_ts();
        }


	

}