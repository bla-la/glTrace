#include <glTraceCommon.h>
#include <generated.h>

#define glEdgeFlagPointerListIBM_wrp						\
    ((void  (*)(GLint stride,const GLboolean **pointer,GLint ptrstride                                        \
    ))GL_ENTRY_PTR(glEdgeFlagPointerListIBM_Idx))


GLAPI void  APIENTRY glEdgeFlagPointerListIBM(GLint stride,const GLboolean **pointer,GLint ptrstride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glEdgeFlagPointerListIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glEdgeFlagPointerListIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glEdgeFlagPointerListIBM_wrp(stride,pointer,ptrstride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glEdgeFlagPointerListIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glEdgeFlagPointerListIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glEdgeFlagPointerListIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glEdgeFlagPointerListIBM_Idx),
				 GL_ENTRY_LAST_TS(glEdgeFlagPointerListIBM_Idx));


        if(last_diff > 1000000000){
            printf("glEdgeFlagPointerListIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glEdgeFlagPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glEdgeFlagPointerListIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glEdgeFlagPointerListIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glEdgeFlagPointerListIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glEdgeFlagPointerListIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glEdgeFlagPointerListIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glEdgeFlagPointerListIBM_Idx) = get_ts();
        }


	

}