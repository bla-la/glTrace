#include <glTraceCommon.h>
#include <generated.h>

#define glGetConvolutionFilterEXT_wrp						\
    ((void  (*)(GLenum target,GLenum format,GLenum type,void *image                                        \
    ))GL_ENTRY_PTR(glGetConvolutionFilterEXT_Idx))


GLAPI void  APIENTRY glGetConvolutionFilterEXT(GLenum target,GLenum format,GLenum type,void *image)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetConvolutionFilterEXT_Idx))
	{
            GL_ENTRY_PTR(glGetConvolutionFilterEXT_Idx) = dlsym(RTLD_NEXT,"glGetConvolutionFilterEXT");
            if(!GL_ENTRY_PTR(glGetConvolutionFilterEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetConvolutionFilterEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetConvolutionFilterEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetConvolutionFilterEXT_wrp(target,format,type,image);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetConvolutionFilterEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetConvolutionFilterEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetConvolutionFilterEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetConvolutionFilterEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetConvolutionFilterEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetConvolutionFilterEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetConvolutionFilterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionFilterEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetConvolutionFilterEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetConvolutionFilterEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetConvolutionFilterEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetConvolutionFilterEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetConvolutionFilterEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetConvolutionFilterEXT_Idx) = get_ts();
        }


	

}