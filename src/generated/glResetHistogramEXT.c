#include <glTraceCommon.h>
#include <generated.h>

#define glResetHistogramEXT_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glResetHistogramEXT_Idx))


GLAPI void  APIENTRY glResetHistogramEXT(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glResetHistogramEXT_Idx))
	{
            GL_ENTRY_PTR(glResetHistogramEXT_Idx) = dlsym(RTLD_NEXT,"glResetHistogramEXT");
            if(!GL_ENTRY_PTR(glResetHistogramEXT_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glResetHistogramEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glResetHistogramEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glResetHistogramEXT_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glResetHistogramEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glResetHistogramEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glResetHistogramEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glResetHistogramEXT_Idx),
				 GL_ENTRY_LAST_TS(glResetHistogramEXT_Idx));
        if(last_diff > 1000000000){
            printf("glResetHistogramEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glResetHistogramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glResetHistogramEXT_Idx),
	             GL_ENTRY_CALL_TIME(glResetHistogramEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glResetHistogramEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glResetHistogramEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glResetHistogramEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glResetHistogramEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glResetHistogramEXT_Idx) = get_ts();
        }


	

}