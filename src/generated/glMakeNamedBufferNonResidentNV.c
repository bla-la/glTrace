#include <glTraceCommon.h>
#include <generated.h>

#define glMakeNamedBufferNonResidentNV_wrp						\
    ((void  (*)(GLuint buffer                                        \
    ))GL_ENTRY_PTR(glMakeNamedBufferNonResidentNV_Idx))


GLAPI void  APIENTRY glMakeNamedBufferNonResidentNV(GLuint buffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMakeNamedBufferNonResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeNamedBufferNonResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeNamedBufferNonResidentNV_wrp(buffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeNamedBufferNonResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeNamedBufferNonResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeNamedBufferNonResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeNamedBufferNonResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glMakeNamedBufferNonResidentNV_Idx));


        if(last_diff > 1000000000){
            printf("glMakeNamedBufferNonResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeNamedBufferNonResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeNamedBufferNonResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeNamedBufferNonResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeNamedBufferNonResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeNamedBufferNonResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeNamedBufferNonResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeNamedBufferNonResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeNamedBufferNonResidentNV_Idx) = get_ts();
        }


	

}