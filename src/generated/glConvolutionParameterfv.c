#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameterfv_wrp						\
    ((void  (*)(GLenum target,GLenum pname,const GLfloat *params                                        \
    ))GL_ENTRY_PTR(glConvolutionParameterfv_Idx))


GLAPI void  APIENTRY glConvolutionParameterfv(GLenum target,GLenum pname,const GLfloat *params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glConvolutionParameterfv_Idx))
	{
            GL_ENTRY_PTR(glConvolutionParameterfv_Idx) = dlsym(RTLD_NEXT,"glConvolutionParameterfv");
            if(!GL_ENTRY_PTR(glConvolutionParameterfv_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glConvolutionParameterfv_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameterfv_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameterfv_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameterfv_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameterfv_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameterfv_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameterfv_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameterfv_Idx));
        if(last_diff > 1000000000){
            printf("glConvolutionParameterfv %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterfv_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameterfv_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameterfv_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameterfv_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameterfv_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameterfv_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameterfv_Idx) = get_ts();
        }


	

}