#include <glTraceCommon.h>
#include <generated.h>

#define glConvolutionParameteriEXT_wrp						\
    ((void  (*)(GLenum target,GLenum pname,GLint params                                        \
    ))GL_ENTRY_PTR(glConvolutionParameteriEXT_Idx))


GLAPI void  APIENTRY glConvolutionParameteriEXT(GLenum target,GLenum pname,GLint params)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glConvolutionParameteriEXT_Idx))
	{
            GL_ENTRY_PTR(glConvolutionParameteriEXT_Idx) = dlsym(RTLD_NEXT,"glConvolutionParameteriEXT");
            if(!GL_ENTRY_PTR(glConvolutionParameteriEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glConvolutionParameteriEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glConvolutionParameteriEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glConvolutionParameteriEXT_wrp(target,pname,params);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glConvolutionParameteriEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glConvolutionParameteriEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glConvolutionParameteriEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glConvolutionParameteriEXT_Idx),
				 GL_ENTRY_LAST_TS(glConvolutionParameteriEXT_Idx));
        if(last_diff > 1000000000){
            printf("glConvolutionParameteriEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glConvolutionParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameteriEXT_Idx),
	             GL_ENTRY_CALL_TIME(glConvolutionParameteriEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glConvolutionParameteriEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glConvolutionParameteriEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glConvolutionParameteriEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glConvolutionParameteriEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glConvolutionParameteriEXT_Idx) = get_ts();
        }


	

}