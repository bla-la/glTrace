#include <glTraceCommon.h>
#include <generated.h>

#define glReadInstrumentsSGIX_wrp						\
    ((void  (*)(GLint marker                                        \
    ))GL_ENTRY_PTR(glReadInstrumentsSGIX_Idx))


GLAPI void  APIENTRY glReadInstrumentsSGIX(GLint marker)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glReadInstrumentsSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glReadInstrumentsSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glReadInstrumentsSGIX_wrp(marker);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glReadInstrumentsSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glReadInstrumentsSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glReadInstrumentsSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glReadInstrumentsSGIX_Idx),
				 GL_ENTRY_LAST_TS(glReadInstrumentsSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glReadInstrumentsSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glReadInstrumentsSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glReadInstrumentsSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glReadInstrumentsSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glReadInstrumentsSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glReadInstrumentsSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glReadInstrumentsSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glReadInstrumentsSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glReadInstrumentsSGIX_Idx) = get_ts();
        }


	

}