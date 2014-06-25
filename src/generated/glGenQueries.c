#include <glTraceCommon.h>
#include <generated.h>

#define glGenQueries_wrp						\
    ((void  (*)(GLsizei n,GLuint *ids                                        \
    ))GL_ENTRY_PTR(glGenQueries_Idx))


GLAPI void  APIENTRY glGenQueries(GLsizei n,GLuint *ids)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGenQueries_Idx))
	{
            GL_ENTRY_PTR(glGenQueries_Idx) = dlsym(RTLD_NEXT,"glGenQueries");
            if(!GL_ENTRY_PTR(glGenQueries_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGenQueries_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenQueries_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenQueries_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenQueries_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenQueries_Idx) ++;

        GL_ENTRY_LAST_TS(glGenQueries_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenQueries_Idx),
				 GL_ENTRY_LAST_TS(glGenQueries_Idx));
        if(last_diff > 1000000000){
            printf("glGenQueries %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenQueries_Idx),
	             GL_ENTRY_CALL_TIME(glGenQueries_Idx),
	             GL_ENTRY_CALL_TIME(glGenQueries_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenQueries_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenQueries_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenQueries_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenQueries_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenQueries_Idx) = get_ts();
        }


	

}