#include <glTraceCommon.h>
#include <generated.h>

#define glGetnConvolutionFilterARB_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,GLsizei bufSize,void *image                                        \
    ))GL_ENTRY_PTR(glGetnConvolutionFilterARB_Idx))


GLAPI void  APIENTRY glGetnConvolutionFilterARB(GLenum target,GLenum format,GLenum type,GLsizei bufSize,void *image)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetnConvolutionFilterARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnConvolutionFilterARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnConvolutionFilterARB_wrp(target,format,type,bufSize,image);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnConvolutionFilterARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnConvolutionFilterARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnConvolutionFilterARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnConvolutionFilterARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnConvolutionFilterARB_Idx));


        if(last_diff > 1000000000){
            printf("glGetnConvolutionFilterARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnConvolutionFilterARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnConvolutionFilterARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnConvolutionFilterARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnConvolutionFilterARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnConvolutionFilterARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnConvolutionFilterARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnConvolutionFilterARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnConvolutionFilterARB_Idx) = get_ts();
        }


	

}