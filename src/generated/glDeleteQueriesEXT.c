#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteQueriesEXT_wrp						\
    ((void  (*)(GLsizei n,const GLuint *ids                                        \
    ))GL_ENTRY_PTR(glDeleteQueriesEXT_Idx))


GLAPI void  APIENTRY glDeleteQueriesEXT(GLsizei n,const GLuint *ids)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDeleteQueriesEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteQueriesEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteQueriesEXT_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteQueriesEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteQueriesEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteQueriesEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteQueriesEXT_Idx),
				 GL_ENTRY_LAST_TS(glDeleteQueriesEXT_Idx));


        if(last_diff > 1000000000){
            printf("glDeleteQueriesEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteQueriesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteQueriesEXT_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteQueriesEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteQueriesEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteQueriesEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteQueriesEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteQueriesEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteQueriesEXT_Idx) = get_ts();
        }


	

}