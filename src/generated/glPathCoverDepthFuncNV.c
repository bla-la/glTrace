#include <glTraceCommon.h>
#include <generated.h>

#define glPathCoverDepthFuncNV_wrp						\
    ((void  (*)(GLenum func                                        \
    ))GL_ENTRY_PTR(glPathCoverDepthFuncNV_Idx))


GLAPI void  APIENTRY glPathCoverDepthFuncNV(GLenum func)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glPathCoverDepthFuncNV_Idx))
	{
            GL_ENTRY_PTR(glPathCoverDepthFuncNV_Idx) = dlsym(RTLD_NEXT,"glPathCoverDepthFuncNV");
            if(!GL_ENTRY_PTR(glPathCoverDepthFuncNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glPathCoverDepthFuncNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glPathCoverDepthFuncNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPathCoverDepthFuncNV_wrp(func);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPathCoverDepthFuncNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPathCoverDepthFuncNV_Idx) ++;

        GL_ENTRY_LAST_TS(glPathCoverDepthFuncNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPathCoverDepthFuncNV_Idx),
				 GL_ENTRY_LAST_TS(glPathCoverDepthFuncNV_Idx));
        if(last_diff > 1000000000){
            printf("glPathCoverDepthFuncNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPathCoverDepthFuncNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathCoverDepthFuncNV_Idx),
	             GL_ENTRY_CALL_TIME(glPathCoverDepthFuncNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glPathCoverDepthFuncNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPathCoverDepthFuncNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPathCoverDepthFuncNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPathCoverDepthFuncNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPathCoverDepthFuncNV_Idx) = get_ts();
        }


	

}