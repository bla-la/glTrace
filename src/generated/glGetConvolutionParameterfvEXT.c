#include <glTraceCommon.h>
#include <generated.h>

#define glGetConvolutionParameterfvEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetConvolutionParameterfvEXT_Idx))


GLAPI void  APIENTRY glGetConvolutionParameterfvEXT(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetConvolutionParameterfvEXT_Idx))
	{
            GL_ENTRY_PTR(glGetConvolutionParameterfvEXT_Idx) = dlsym(RTLD_NEXT,"glGetConvolutionParameterfvEXT");
            if(!GL_ENTRY_PTR(glGetConvolutionParameterfvEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetConvolutionParameterfvEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetConvolutionParameterfvEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetConvolutionParameterfvEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetConvolutionParameterfvEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetConvolutionParameterfvEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetConvolutionParameterfvEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetConvolutionParameterfvEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetConvolutionParameterfvEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetConvolutionParameterfvEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameterfvEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameterfvEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterfvEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetConvolutionParameterfvEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterfvEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetConvolutionParameterfvEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetConvolutionParameterfvEXT_Idx) = get_ts();
        }


	

}