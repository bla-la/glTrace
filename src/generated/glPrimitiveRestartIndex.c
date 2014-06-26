#include <glTraceCommon.h>
#include <generated.h>

#define glPrimitiveRestartIndex_wrp						\
    ((void  (*)(GLuint index                                        \
    ))GL_ENTRY_PTR(glPrimitiveRestartIndex_Idx))


GLAPI void  APIENTRY glPrimitiveRestartIndex(GLuint index)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPrimitiveRestartIndex_Idx))
    	{
            GL_ENTRY_PREV_TS(glPrimitiveRestartIndex_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glPrimitiveRestartIndex_wrp(index);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPrimitiveRestartIndex_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPrimitiveRestartIndex_Idx) ++;

        GL_ENTRY_LAST_TS(glPrimitiveRestartIndex_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPrimitiveRestartIndex_Idx),
				 GL_ENTRY_LAST_TS(glPrimitiveRestartIndex_Idx));


        if(last_diff > 1000000000){
            printf("glPrimitiveRestartIndex %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPrimitiveRestartIndex_Idx),
	             GL_ENTRY_CALL_TIME(glPrimitiveRestartIndex_Idx),
	             GL_ENTRY_CALL_TIME(glPrimitiveRestartIndex_Idx) /
	             GL_ENTRY_CALL_COUNT(glPrimitiveRestartIndex_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPrimitiveRestartIndex_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPrimitiveRestartIndex_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPrimitiveRestartIndex_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPrimitiveRestartIndex_Idx) = get_ts();
        }


	

}