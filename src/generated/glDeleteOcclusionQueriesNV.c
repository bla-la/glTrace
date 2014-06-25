#include <glTraceCommon.h>
#include <generated.h>

#define glDeleteOcclusionQueriesNV_wrp						\
    ((void  (*)(GLsizei n,const GLuint *ids                                        \
    ))GL_ENTRY_PTR(glDeleteOcclusionQueriesNV_Idx))


GLAPI void  APIENTRY glDeleteOcclusionQueriesNV(GLsizei n,const GLuint *ids)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glDeleteOcclusionQueriesNV_Idx))
	{
            GL_ENTRY_PTR(glDeleteOcclusionQueriesNV_Idx) = dlsym(RTLD_NEXT,"glDeleteOcclusionQueriesNV");
            if(!GL_ENTRY_PTR(glDeleteOcclusionQueriesNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glDeleteOcclusionQueriesNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glDeleteOcclusionQueriesNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDeleteOcclusionQueriesNV_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDeleteOcclusionQueriesNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDeleteOcclusionQueriesNV_Idx) ++;

        GL_ENTRY_LAST_TS(glDeleteOcclusionQueriesNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDeleteOcclusionQueriesNV_Idx),
				 GL_ENTRY_LAST_TS(glDeleteOcclusionQueriesNV_Idx));
        if(last_diff > 1000000000){
            printf("glDeleteOcclusionQueriesNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDeleteOcclusionQueriesNV_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteOcclusionQueriesNV_Idx),
	             GL_ENTRY_CALL_TIME(glDeleteOcclusionQueriesNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glDeleteOcclusionQueriesNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDeleteOcclusionQueriesNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDeleteOcclusionQueriesNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDeleteOcclusionQueriesNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDeleteOcclusionQueriesNV_Idx) = get_ts();
        }


	

}