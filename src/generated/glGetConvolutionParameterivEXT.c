#include <glTraceCommon.h>
#include <generated.h>

#define glGetConvolutionParameterivEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint *params                                        \
    ))GL_ENTRY_PTR(glGetConvolutionParameterivEXT_Idx))


GLAPI void  APIENTRY glGetConvolutionParameterivEXT(GLenum target,GLenum pname,GLint *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetConvolutionParameterivEXT_Idx))
	{
            GL_ENTRY_PTR(glGetConvolutionParameterivEXT_Idx) = dlsym(RTLD_NEXT,"glGetConvolutionParameterivEXT");
            if(!GL_ENTRY_PTR(glGetConvolutionParameterivEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetConvolutionParameterivEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetConvolutionParameterivEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetConvolutionParameterivEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetConvolutionParameterivEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetConvolutionParameterivEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetConvolutionParameterivEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetConvolutionParameterivEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetConvolutionParameterivEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetConvolutionParameterivEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameterivEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameterivEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterivEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetConvolutionParameterivEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterivEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetConvolutionParameterivEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetConvolutionParameterivEXT_Idx) = get_ts();
        }


	

}