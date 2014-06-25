#include <glTraceCommon.h>
#include <generated.h>

#define glGetnHistogramARB_wrp						\
    ((void  (*)(GLenum target,GLboolean reset,GLenum format,GLenum type,GLsizei bufSize,void *values                                        \
    ))GL_ENTRY_PTR(glGetnHistogramARB_Idx))


GLAPI void  APIENTRY glGetnHistogramARB(GLenum target,GLboolean reset,GLenum format,GLenum type,GLsizei bufSize,void *values)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glGetnHistogramARB_Idx))
	{
            GL_ENTRY_PTR(glGetnHistogramARB_Idx) = dlsym(RTLD_NEXT,"glGetnHistogramARB");
            if(!GL_ENTRY_PTR(glGetnHistogramARB_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glGetnHistogramARB_Idx))
    	{
            GL_ENTRY_PREV_TS(glGetnHistogramARB_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glGetnHistogramARB_wrp(target,reset,format,type,bufSize,values);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glGetnHistogramARB_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glGetnHistogramARB_Idx) ++;

        GL_ENTRY_LAST_TS(glGetnHistogramARB_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glGetnHistogramARB_Idx),
				 GL_ENTRY_LAST_TS(glGetnHistogramARB_Idx));
        if(last_diff > 1000000000){
            printf("glGetnHistogramARB %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glGetnHistogramARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnHistogramARB_Idx),
	             GL_ENTRY_CALL_TIME(glGetnHistogramARB_Idx) /
	             GL_ENTRY_CALL_COUNT(glGetnHistogramARB_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glGetnHistogramARB_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glGetnHistogramARB_Idx) = 0;
             GL_ENTRY_CALL_TIME(glGetnHistogramARB_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glGetnHistogramARB_Idx) = get_ts();
        }


	

}