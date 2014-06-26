#include <glTraceCommon.h>
#include <generated.h>

#define glCopyConvolutionFilter2D_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height                                        \
    ))GL_ENTRY_PTR(glCopyConvolutionFilter2D_Idx))


GLAPI void  APIENTRY glCopyConvolutionFilter2D(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width,GLsizei height)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glCopyConvolutionFilter2D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyConvolutionFilter2D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyConvolutionFilter2D_wrp(target,internalformat,x,y,width,height);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyConvolutionFilter2D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyConvolutionFilter2D_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyConvolutionFilter2D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyConvolutionFilter2D_Idx),
				 GL_ENTRY_LAST_TS(glCopyConvolutionFilter2D_Idx));


        if(last_diff > 1000000000){
            printf("glCopyConvolutionFilter2D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyConvolutionFilter2D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyConvolutionFilter2D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyConvolutionFilter2D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyConvolutionFilter2D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyConvolutionFilter2D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyConvolutionFilter2D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyConvolutionFilter2D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyConvolutionFilter2D_Idx) = get_ts();
        }


	

}