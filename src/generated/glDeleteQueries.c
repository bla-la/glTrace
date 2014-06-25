#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteQueries_wrp						\
    ((void  (*)(GLsizei n,const GLuint *ids                                        \
    ))GL_ENTRY_PTR(glDeleteQueries_Idx))


GLAPI void  APIENTRY glDeleteQueries(GLsizei n,const GLuint *ids)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteQueries_Idx))
	{
            GL_ENTRY_PTR(glDeleteQueries_Idx) = dlsym(RTLD_NEXT,"glDeleteQueries");
            if(!GL_ENTRY_PTR(glDeleteQueries_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteQueries_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteQueries_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteQueries_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteQueries_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteQueries_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteQueries_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteQueries_Idx),
				 GL_ENTRY_LAST_TS(glDeleteQueries_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteQueries %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteQueries_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteQueries_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteQueries_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteQueries_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteQueries_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteQueries_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteQueries_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteQueries_Idx) = get_ts();
        }


	

}