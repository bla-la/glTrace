#include <glTraceCommon.h>
#include <generated.h>

#define glGetnSeparableFilterARB_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,GLsizei rowBufSize,void *row,GLsizei columnBufSize,void *column,void *span                                        \
    ))GL_ENTRY_PTR(glGetnSeparableFilterARB_Idx))


GLAPI void  APIENTRY glGetnSeparableFilterARB(GLenum target,GLenum format,GLenum type,GLsizei rowBufSize,void *row,GLsizei columnBufSize,void *column,void *span)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnSeparableFilterARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnSeparableFilterARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnSeparableFilterARB_wrp(target,format,type,rowBufSize,row,columnBufSize,column,span);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnSeparableFilterARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnSeparableFilterARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnSeparableFilterARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnSeparableFilterARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnSeparableFilterARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnSeparableFilterARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnSeparableFilterARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnSeparableFilterARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnSeparableFilterARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnSeparableFilterARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnSeparableFilterARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnSeparableFilterARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnSeparableFilterARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnSeparableFilterARB_Idx) = get_ts();
        }


	

}