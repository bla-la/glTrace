#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameterfEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat params                                        \
    ))GL_ENTRY_PTR(glConvolutionParameterfEXT_Idx))


GLAPI void  APIENTRY glConvolutionParameterfEXT(GLenum target,GLenum pname,GLfloat params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glConvolutionParameterfEXT_Idx))
	{
            GL_ENTRY_PTR(glConvolutionParameterfEXT_Idx) = dlsym(RTLD_NEXT,"glConvolutionParameterfEXT");
            if(!GL_ENTRY_PTR(glConvolutionParameterfEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glConvolutionParameterfEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameterfEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameterfEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameterfEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameterfEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameterfEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameterfEXT_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameterfEXT_Idx));
        if(last_diff > 1000000000){
            printf("glConvolutionParameterfEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterfEXT_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterfEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterfEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameterfEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameterfEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameterfEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameterfEXT_Idx) = get_ts();
        }


	

}