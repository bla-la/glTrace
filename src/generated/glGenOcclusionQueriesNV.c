#include <glTraceCommon.h>
#include <generated.h>

#define glGenOcclusionQueriesNV_wrp						\
    ((void  (*)(GLsizei n,GLuint *ids                                        \
    ))GL_ENTRY_PTR(glGenOcclusionQueriesNV_Idx))


GLAPI void  APIENTRY glGenOcclusionQueriesNV(GLsizei n,GLuint *ids)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGenOcclusionQueriesNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glGenOcclusionQueriesNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGenOcclusionQueriesNV_wrp(n,ids);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGenOcclusionQueriesNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGenOcclusionQueriesNV_Idx) ++;

        GL_ENTRY_LAST_TS(glGenOcclusionQueriesNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGenOcclusionQueriesNV_Idx),
				 GL_ENTRY_LAST_TS(glGenOcclusionQueriesNV_Idx));


        if(last_diff > 1000000000){
            printf("glGenOcclusionQueriesNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGenOcclusionQueriesNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenOcclusionQueriesNV_Idx),
	             GL_ENTRY_CALL_TIME(glGenOcclusionQueriesNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glGenOcclusionQueriesNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGenOcclusionQueriesNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGenOcclusionQueriesNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGenOcclusionQueriesNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGenOcclusionQueriesNV_Idx) = get_ts();
        }


	

}