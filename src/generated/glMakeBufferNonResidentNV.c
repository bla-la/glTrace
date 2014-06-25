#include <glTraceCommon.h>
#include <generated.h>

#define glMakeBufferNonResidentNV_wrp						\
    ((void  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glMakeBufferNonResidentNV_Idx))


GLAPI void  APIENTRY glMakeBufferNonResidentNV(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMakeBufferNonResidentNV_Idx))
	{
            GL_ENTRY_PTR(glMakeBufferNonResidentNV_Idx) = dlsym(RTLD_NEXT,"glMakeBufferNonResidentNV");
            if(!GL_ENTRY_PTR(glMakeBufferNonResidentNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMakeBufferNonResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeBufferNonResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeBufferNonResidentNV_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeBufferNonResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeBufferNonResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeBufferNonResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeBufferNonResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glMakeBufferNonResidentNV_Idx));
        if(last_diff > 1000000000){
            printf("glMakeBufferNonResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeBufferNonResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeBufferNonResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeBufferNonResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeBufferNonResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeBufferNonResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeBufferNonResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeBufferNonResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeBufferNonResidentNV_Idx) = get_ts();
        }


	

}