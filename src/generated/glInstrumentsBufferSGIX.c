#include <glTraceCommon.h>
#include <generated.h>

#define glInstrumentsBufferSGIX_wrp						\
    ((void  (*)(GLsizei size,GLint *buffer                                        \
    ))GL_ENTRY_PTR(glInstrumentsBufferSGIX_Idx))


GLAPI void  APIENTRY glInstrumentsBufferSGIX(GLsizei size,GLint *buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glInstrumentsBufferSGIX_Idx))
    	{
            GL_ENTRY_PREV_TS(glInstrumentsBufferSGIX_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glInstrumentsBufferSGIX_wrp(size,buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glInstrumentsBufferSGIX_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glInstrumentsBufferSGIX_Idx) ++;

        GL_ENTRY_LAST_TS(glInstrumentsBufferSGIX_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glInstrumentsBufferSGIX_Idx),
				 GL_ENTRY_LAST_TS(glInstrumentsBufferSGIX_Idx));


        if(last_diff > 1000000000){
            printf("glInstrumentsBufferSGIX %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glInstrumentsBufferSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glInstrumentsBufferSGIX_Idx),
	             GL_ENTRY_CALL_TIME(glInstrumentsBufferSGIX_Idx) /
	             GL_ENTRY_CALL_COUNT(glInstrumentsBufferSGIX_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glInstrumentsBufferSGIX_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glInstrumentsBufferSGIX_Idx) = 0;
             GL_ENTRY_CALL_TIME(glInstrumentsBufferSGIX_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glInstrumentsBufferSGIX_Idx) = get_ts();
        }


	

}