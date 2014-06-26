#include <glTraceCommon.h>
#include <generated.h>

#define glGetConvolutionFilter_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,void *image                                        \
    ))GL_ENTRY_PTR(glGetConvolutionFilter_Idx))


GLAPI void  APIENTRY glGetConvolutionFilter(GLenum target,GLenum format,GLenum type,void *image)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetConvolutionFilter_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetConvolutionFilter_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetConvolutionFilter_wrp(target,format,type,image);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetConvolutionFilter_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetConvolutionFilter_Idx) ++;

        GL_ENTRY_LAST_TS(glGetConvolutionFilter_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetConvolutionFilter_Idx),
				 GL_ENTRY_LAST_TS(glGetConvolutionFilter_Idx));


        if(last_diff > 1000000000){
            printf("glGetConvolutionFilter %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetConvolutionFilter_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionFilter_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionFilter_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetConvolutionFilter_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetConvolutionFilter_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetConvolutionFilter_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetConvolutionFilter_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetConvolutionFilter_Idx) = get_ts();
        }


	

}