#include <glTraceCommon.h>
#include <generated.h>

#define glGetConvolutionParameterxvOES_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfixed *params                                        \
    ))GL_ENTRY_PTR(glGetConvolutionParameterxvOES_Idx))


GLAPI void  APIENTRY glGetConvolutionParameterxvOES(GLenum target,GLenum pname,GLfixed *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetConvolutionParameterxvOES_Idx))
	{
            GL_ENTRY_PTR(glGetConvolutionParameterxvOES_Idx) = dlsym(RTLD_NEXT,"glGetConvolutionParameterxvOES");
            if(!GL_ENTRY_PTR(glGetConvolutionParameterxvOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetConvolutionParameterxvOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetConvolutionParameterxvOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetConvolutionParameterxvOES_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetConvolutionParameterxvOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetConvolutionParameterxvOES_Idx) ++;

        GL_ENTRY_LAST_TS(glGetConvolutionParameterxvOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetConvolutionParameterxvOES_Idx),
				 GL_ENTRY_LAST_TS(glGetConvolutionParameterxvOES_Idx));
        if(last_diff > 1000000000){
            printf("glGetConvolutionParameterxvOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameterxvOES_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameterxvOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterxvOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetConvolutionParameterxvOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterxvOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetConvolutionParameterxvOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetConvolutionParameterxvOES_Idx) = get_ts();
        }


	

}