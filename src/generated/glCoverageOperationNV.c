#include <glTraceCommon.h>
#include <generated.h>

#define glCoverageOperationNV_wrp						\
    ((void  (*)(GLenum operation                                        \
    ))GL_ENTRY_PTR(glCoverageOperationNV_Idx))


GLAPI void  APIENTRY glCoverageOperationNV(GLenum operation)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCoverageOperationNV_Idx))
	{
            GL_ENTRY_PTR(glCoverageOperationNV_Idx) = dlsym(RTLD_NEXT,"glCoverageOperationNV");
            if(!GL_ENTRY_PTR(glCoverageOperationNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCoverageOperationNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glCoverageOperationNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCoverageOperationNV_wrp(operation);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCoverageOperationNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCoverageOperationNV_Idx) ++;

        GL_ENTRY_LAST_TS(glCoverageOperationNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCoverageOperationNV_Idx),
				 GL_ENTRY_LAST_TS(glCoverageOperationNV_Idx));
        if(last_diff > 1000000000){
            printf("glCoverageOperationNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCoverageOperationNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverageOperationNV_Idx),
	             GL_ENTRY_CALL_TIME(glCoverageOperationNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glCoverageOperationNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCoverageOperationNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCoverageOperationNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCoverageOperationNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCoverageOperationNV_Idx) = get_ts();
        }


	

}