#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionFilter2D_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *image                                        \
    ))GL_ENTRY_PTR(glConvolutionFilter2D_Idx))


GLAPI void  APIENTRY glConvolutionFilter2D(GLenum target,GLenum internalformat,GLsizei width,GLsizei height,GLenum format,GLenum type,const void *image)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glConvolutionFilter2D_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionFilter2D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionFilter2D_wrp(target,internalformat,width,height,format,type,image);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionFilter2D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionFilter2D_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionFilter2D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionFilter2D_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionFilter2D_Idx));


        if(last_diff > 1000000000){
            printf("glConvolutionFilter2D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionFilter2D_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionFilter2D_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionFilter2D_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionFilter2D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionFilter2D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionFilter2D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionFilter2D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionFilter2D_Idx) = get_ts();
        }


	

}