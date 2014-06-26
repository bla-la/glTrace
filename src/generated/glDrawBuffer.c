#include <glTraceCommon.h>
#include <generated.h>

#define glDrawBuffer_wrp						\
    ((void  (*)(GLenum mode                                        \
    ))GL_ENTRY_PTR(glDrawBuffer_Idx))


GLAPI void  APIENTRY glDrawBuffer(GLenum mode)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glDrawBuffer_Idx))
    	{
            GL_ENTRY_PREV_TS(glDrawBuffer_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glDrawBuffer_wrp(mode);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glDrawBuffer_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glDrawBuffer_Idx) ++;

        GL_ENTRY_LAST_TS(glDrawBuffer_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glDrawBuffer_Idx),
				 GL_ENTRY_LAST_TS(glDrawBuffer_Idx));


        if(last_diff > 1000000000){
            printf("glDrawBuffer %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glDrawBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffer_Idx),
	             GL_ENTRY_CALL_TIME(glDrawBuffer_Idx) /
	             GL_ENTRY_CALL_COUNT(glDrawBuffer_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glDrawBuffer_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glDrawBuffer_Idx) = 0;
             GL_ENTRY_CALL_TIME(glDrawBuffer_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glDrawBuffer_Idx) = get_ts();
        }


	

}