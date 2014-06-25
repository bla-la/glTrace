#include <glTraceCommon.h>
#include <generated.h>

#define glEdgeFlagv_wrp						\
    ((void  (*)(const GLboolean *flag                                        \
    ))GL_ENTRY_PTR(glEdgeFlagv_Idx))


GLAPI void  APIENTRY glEdgeFlagv(const GLboolean *flag)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEdgeFlagv_Idx))
	{
            GL_ENTRY_PTR(glEdgeFlagv_Idx) = dlsym(RTLD_NEXT,"glEdgeFlagv");
            if(!GL_ENTRY_PTR(glEdgeFlagv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEdgeFlagv_Idx))
    	{
            GL_ENTRY_PREV_TS(glEdgeFlagv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEdgeFlagv_wrp(flag);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEdgeFlagv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEdgeFlagv_Idx) ++;

        GL_ENTRY_LAST_TS(glEdgeFlagv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEdgeFlagv_Idx),
				 GL_ENTRY_LAST_TS(glEdgeFlagv_Idx));
        if(last_diff > 1000000000){
            printf("glEdgeFlagv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEdgeFlagv_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagv_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagv_Idx) /
	             GL_ENTRY_CALL_COUNT(glEdgeFlagv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEdgeFlagv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEdgeFlagv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEdgeFlagv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEdgeFlagv_Idx) = get_ts();
        }


	

}