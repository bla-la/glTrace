#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameterf_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat params                                        \
    ))GL_ENTRY_PTR(glConvolutionParameterf_Idx))


GLAPI void  APIENTRY glConvolutionParameterf(GLenum target,GLenum pname,GLfloat params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glConvolutionParameterf_Idx))
	{
            GL_ENTRY_PTR(glConvolutionParameterf_Idx) = dlsym(RTLD_NEXT,"glConvolutionParameterf");
            if(!GL_ENTRY_PTR(glConvolutionParameterf_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glConvolutionParameterf_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameterf_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameterf_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameterf_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameterf_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameterf_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameterf_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameterf_Idx));
        if(last_diff > 1000000000){
            printf("glConvolutionParameterf %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterf_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterf_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterf_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterf_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameterf_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameterf_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameterf_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameterf_Idx) = get_ts();
        }


	

}