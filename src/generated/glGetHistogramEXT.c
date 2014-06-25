#include <glTraceCommon.h>
#include <generated.h>

#define glGetHistogramEXT_wrp						\
    ((void  (*)(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values                                        \
    ))GL_ENTRY_PTR(glGetHistogramEXT_Idx))


GLAPI void  APIENTRY glGetHistogramEXT(GLenum target,GLboolean reset,GLenum format,GLenum type,void *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetHistogramEXT_Idx))
	{
            GL_ENTRY_PTR(glGetHistogramEXT_Idx) = dlsym(RTLD_NEXT,"glGetHistogramEXT");
            if(!GL_ENTRY_PTR(glGetHistogramEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetHistogramEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetHistogramEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetHistogramEXT_wrp(target,reset,format,type,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetHistogramEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetHistogramEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glGetHistogramEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetHistogramEXT_Idx),
				 GL_ENTRY_LAST_TS(glGetHistogramEXT_Idx));
        if(last_diff > 1000000000){
            printf("glGetHistogramEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetHistogramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glGetHistogramEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetHistogramEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetHistogramEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetHistogramEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetHistogramEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetHistogramEXT_Idx) = get_ts();
        }


	

}