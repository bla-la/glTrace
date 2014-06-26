#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameteri_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint params                                        \
    ))GL_ENTRY_PTR(glConvolutionParameteri_Idx))


GLAPI void  APIENTRY glConvolutionParameteri(GLenum target,GLenum pname,GLint params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glConvolutionParameteri_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameteri_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameteri_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameteri_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameteri_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameteri_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameteri_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameteri_Idx));


        if(last_diff > 1000000000){
            printf("glConvolutionParameteri %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameteri_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameteri_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameteri_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameteri_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameteri_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameteri_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameteri_Idx) = get_ts();
        }


	

}