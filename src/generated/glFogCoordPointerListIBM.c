#include <glTraceCommon.h>
#include <generated.h>

#define glFogCoordPointerListIBM_wrp						\
    ((void  (*)(GLenum type,GLint stride,const void **pointer,GLint ptrstride                                        \
    ))GL_ENTRY_PTR(glFogCoordPointerListIBM_Idx))


GLAPI void  APIENTRY glFogCoordPointerListIBM(GLenum type,GLint stride,const void **pointer,GLint ptrstride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glFogCoordPointerListIBM_Idx))
    	{
            GL_ENTRY_PREV_TS(glFogCoordPointerListIBM_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glFogCoordPointerListIBM_wrp(type,stride,pointer,ptrstride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glFogCoordPointerListIBM_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glFogCoordPointerListIBM_Idx) ++;

        GL_ENTRY_LAST_TS(glFogCoordPointerListIBM_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glFogCoordPointerListIBM_Idx),
				 GL_ENTRY_LAST_TS(glFogCoordPointerListIBM_Idx));


        if(last_diff > 1000000000){
            printf("glFogCoordPointerListIBM %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glFogCoordPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordPointerListIBM_Idx),
	             GL_ENTRY_CALL_TIME(glFogCoordPointerListIBM_Idx) /
	             GL_ENTRY_CALL_COUNT(glFogCoordPointerListIBM_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glFogCoordPointerListIBM_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glFogCoordPointerListIBM_Idx) = 0;
             GL_ENTRY_CALL_TIME(glFogCoordPointerListIBM_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glFogCoordPointerListIBM_Idx) = get_ts();
        }


	

}