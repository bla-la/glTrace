#include <glTraceCommon.h>
#include <generated.h>

#define glSecondaryColorPointerListIBM_wrp						\
    ((void  (*)(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride                                        \
    ))GL_ENTRY_PTR(glSecondaryColorPointerListIBM_Idx))


GLAPI void  APIENTRY glSecondaryColorPointerListIBM(GLint size,GLenum type,GLint stride,const void **pointer,GLint ptrstride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glSecondaryColorPointerListIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glSecondaryColorPointerListIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glSecondaryColorPointerListIBM_wrp(size,type,stride,pointer,ptrstride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glSecondaryColorPointerListIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glSecondaryColorPointerListIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glSecondaryColorPointerListIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glSecondaryColorPointerListIBM_Idx),
				 GL_ENTRY_LAST_TS(glSecondaryColorPointerListIBM_Idx));


        if(last_diff > 1000000000){
            printf("glSecondaryColorPointerListIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glSecondaryColorPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glSecondaryColorPointerListIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glSecondaryColorPointerListIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glSecondaryColorPointerListIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glSecondaryColorPointerListIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glSecondaryColorPointerListIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glSecondaryColorPointerListIBM_Idx) = get_ts();
        }


	

}