#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameterxvOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfixed *params                                        \
    ))GL_ENTRY_PTR(glConvolutionParameterxvOES_Idx))


GLAPI void  APIENTRY glConvolutionParameterxvOES(GLenum target,GLenum pname,const GLfixed *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glConvolutionParameterxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameterxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameterxvOES_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameterxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameterxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameterxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameterxvOES_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameterxvOES_Idx));


        if(last_diff > 1000000000){
            printf("glConvolutionParameterxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameterxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameterxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameterxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameterxvOES_Idx) = get_ts();
        }


	

}