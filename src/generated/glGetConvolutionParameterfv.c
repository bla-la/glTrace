#include <glTraceCommon.h>
#include <generated.h>

#define glGetConvolutionParameterfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLfloat *params                                        \
    ))GL_ENTRY_PTR(glGetConvolutionParameterfv_Idx))


GLAPI void  APIENTRY glGetConvolutionParameterfv(GLenum target,GLenum pname,GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetConvolutionParameterfv_Idx))
	{
            GL_ENTRY_PTR(glGetConvolutionParameterfv_Idx) = dlsym(RTLD_NEXT,"glGetConvolutionParameterfv");
            if(!GL_ENTRY_PTR(glGetConvolutionParameterfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetConvolutionParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetConvolutionParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetConvolutionParameterfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetConvolutionParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetConvolutionParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glGetConvolutionParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetConvolutionParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glGetConvolutionParameterfv_Idx));
        if(last_diff > 1000000000){
            printf("glGetConvolutionParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetConvolutionParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetConvolutionParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetConvolutionParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetConvolutionParameterfv_Idx) = get_ts();
        }


	

}