#include <glTraceCommon.h>
#include <generated.h>

#define glHistogramEXT_wrp						\
    ((void  (*)(GLenum target,GLsizei width,GLenum internalformat,GLboolean sink                                        \
    ))GL_ENTRY_PTR(glHistogramEXT_Idx))


GLAPI void  APIENTRY glHistogramEXT(GLenum target,GLsizei width,GLenum internalformat,GLboolean sink)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glHistogramEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glHistogramEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glHistogramEXT_wrp(target,width,internalformat,sink);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glHistogramEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glHistogramEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glHistogramEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glHistogramEXT_Idx),
				 GL_ENTRY_LAST_TS(glHistogramEXT_Idx));


        if(last_diff > 1000000000){
            printf("glHistogramEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glHistogramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glHistogramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glHistogramEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glHistogramEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glHistogramEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glHistogramEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glHistogramEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glHistogramEXT_Idx) = get_ts();
        }


	

}