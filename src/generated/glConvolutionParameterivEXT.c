#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameterivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLint *params                                        \
    ))GL_ENTRY_PTR(glConvolutionParameterivEXT_Idx))


GLAPI void  APIENTRY glConvolutionParameterivEXT(GLenum target,GLenum pname,const GLint *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glConvolutionParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameterivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameterivEXT_Idx));


        if(last_diff > 1000000000){
            printf("glConvolutionParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameterivEXT_Idx) = get_ts();
        }


	

}