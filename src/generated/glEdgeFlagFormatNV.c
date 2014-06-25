#include <glTraceCommon.h>
#include <generated.h>

#define glEdgeFlagFormatNV_wrp						\
    ((void  (*)(GLsizei stride                                        \
    ))GL_ENTRY_PTR(glEdgeFlagFormatNV_Idx))


GLAPI void  APIENTRY glEdgeFlagFormatNV(GLsizei stride)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glEdgeFlagFormatNV_Idx))
	{
            GL_ENTRY_PTR(glEdgeFlagFormatNV_Idx) = dlsym(RTLD_NEXT,"glEdgeFlagFormatNV");
            if(!GL_ENTRY_PTR(glEdgeFlagFormatNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glEdgeFlagFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glEdgeFlagFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEdgeFlagFormatNV_wrp(stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEdgeFlagFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEdgeFlagFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glEdgeFlagFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEdgeFlagFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glEdgeFlagFormatNV_Idx));
        if(last_diff > 1000000000){
            printf("glEdgeFlagFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEdgeFlagFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glEdgeFlagFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEdgeFlagFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEdgeFlagFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEdgeFlagFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEdgeFlagFormatNV_Idx) = get_ts();
        }


	

}