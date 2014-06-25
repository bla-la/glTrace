#include <glTraceCommon.h>
#include <generated.h>

#define glCopyConvolutionFilter1D_wrp						\
    ((void  (*)(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width                                        \
    ))GL_ENTRY_PTR(glCopyConvolutionFilter1D_Idx))


GLAPI void  APIENTRY glCopyConvolutionFilter1D(GLenum target,GLenum internalformat,GLint x,GLint y,GLsizei width)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCopyConvolutionFilter1D_Idx))
	{
            GL_ENTRY_PTR(glCopyConvolutionFilter1D_Idx) = dlsym(RTLD_NEXT,"glCopyConvolutionFilter1D");
            if(!GL_ENTRY_PTR(glCopyConvolutionFilter1D_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCopyConvolutionFilter1D_Idx))
    	{
            GL_ENTRY_PREV_TS(glCopyConvolutionFilter1D_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glCopyConvolutionFilter1D_wrp(target,internalformat,x,y,width);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCopyConvolutionFilter1D_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCopyConvolutionFilter1D_Idx) ++;

        GL_ENTRY_LAST_TS(glCopyConvolutionFilter1D_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCopyConvolutionFilter1D_Idx),
				 GL_ENTRY_LAST_TS(glCopyConvolutionFilter1D_Idx));
        if(last_diff > 1000000000){
            printf("glCopyConvolutionFilter1D %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCopyConvolutionFilter1D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyConvolutionFilter1D_Idx),
	             GL_ENTRY_CALL_TIME(glCopyConvolutionFilter1D_Idx) /
	             GL_ENTRY_CALL_COUNT(glCopyConvolutionFilter1D_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCopyConvolutionFilter1D_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCopyConvolutionFilter1D_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCopyConvolutionFilter1D_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCopyConvolutionFilter1D_Idx) = get_ts();
        }


	

}