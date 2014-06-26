#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameterfvEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glConvolutionParameterfvEXT_Idx))


GLAPI void  APIENTRY glConvolutionParameterfvEXT(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glConvolutionParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameterfvEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameterfvEXT_Idx));


        if(last_diff > 1000000000){
            printf("glConvolutionParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameterfvEXT_Idx) = get_ts();
        }


	

}