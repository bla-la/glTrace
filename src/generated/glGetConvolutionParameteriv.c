#include <glTraceCommon.h>
#include <generated.h>

#define glGetConvolutionParameteriv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetConvolutionParameteriv_Idx))


GLAPI void  APIENTRY glGetConvolutionParameteriv(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glGetConvolutionParameteriv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetConvolutionParameteriv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetConvolutionParameteriv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetConvolutionParameteriv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetConvolutionParameteriv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetConvolutionParameteriv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetConvolutionParameteriv_Idx),
				 GL_ENTRY_LAST_TS(glGetConvolutionParameteriv_Idx));


        if(last_diff > 1000000000){
            printf("glGetConvolutionParameteriv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameteriv_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameteriv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameteriv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetConvolutionParameteriv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetConvolutionParameteriv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetConvolutionParameteriv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetConvolutionParameteriv_Idx) = get_ts();
        }


	

}