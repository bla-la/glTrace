#include <glTraceCommon.h>
#include <generated.h>

#define glReadBuffer_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glReadBuffer_Idx))


GLAPI void  APIENTRY glReadBuffer(GLenum mode)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glReadBuffer_Idx))
	{
            GL_ENTRY_PTR(glReadBuffer_Idx) = dlsym(RTLD_NEXT,"glReadBuffer");
            if(!GL_ENTRY_PTR(glReadBuffer_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glReadBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glReadBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReadBuffer_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReadBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReadBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glReadBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReadBuffer_Idx),
				 GL_ENTRY_LAST_TS(glReadBuffer_Idx));
        if(last_diff > 1000000000){
            printf("glReadBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReadBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glReadBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glReadBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glReadBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReadBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReadBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReadBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReadBuffer_Idx) = get_ts();
        }


	

}