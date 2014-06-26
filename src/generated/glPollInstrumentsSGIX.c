#include <glTraceCommon.h>
#include <generated.h>

#define glPollInstrumentsSGIX_wrp						\
    ((GLint  (*)(GLint *marker_p                                        \
    ))GL_ENTRY_PTR(glPollInstrumentsSGIX_Idx))


GLAPI GLint  APIENTRY glPollInstrumentsSGIX(GLint *marker_p)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glPollInstrumentsSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glPollInstrumentsSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLint  retval = glPollInstrumentsSGIX_wrp(marker_p);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glPollInstrumentsSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glPollInstrumentsSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glPollInstrumentsSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glPollInstrumentsSGIX_Idx),
				 GL_ENTRY_LAST_TS(glPollInstrumentsSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glPollInstrumentsSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glPollInstrumentsSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glPollInstrumentsSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glPollInstrumentsSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glPollInstrumentsSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glPollInstrumentsSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glPollInstrumentsSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glPollInstrumentsSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glPollInstrumentsSGIX_Idx) = get_ts();
        }


	return retval;

}