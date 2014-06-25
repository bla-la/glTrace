#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameterxOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfixed param                                        \
    ))GL_ENTRY_PTR(glConvolutionParameterxOES_Idx))


GLAPI void  APIENTRY glConvolutionParameterxOES(GLenum target,GLenum pname,GLfixed param)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glConvolutionParameterxOES_Idx))
	{
            GL_ENTRY_PTR(glConvolutionParameterxOES_Idx) = dlsym(RTLD_NEXT,"glConvolutionParameterxOES");
            if(!GL_ENTRY_PTR(glConvolutionParameterxOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glConvolutionParameterxOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameterxOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameterxOES_wrp(target,pname,param);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameterxOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameterxOES_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameterxOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameterxOES_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameterxOES_Idx));
        if(last_diff > 1000000000){
            printf("glConvolutionParameterxOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterxOES_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterxOES_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterxOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterxOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameterxOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameterxOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameterxOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameterxOES_Idx) = get_ts();
        }


	

}