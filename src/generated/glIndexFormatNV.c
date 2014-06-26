#include <glTraceCommon.h>
#include <generated.h>

#define glIndexFormatNV_wrp						\
    ((void  (*)(GLenum type,GLsizei stride                                        \
    ))GL_ENTRY_PTR(glIndexFormatNV_Idx))


GLAPI void  APIENTRY glIndexFormatNV(GLenum type,GLsizei stride)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIndexFormatNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIndexFormatNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glIndexFormatNV_wrp(type,stride);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIndexFormatNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIndexFormatNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIndexFormatNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIndexFormatNV_Idx),
				 GL_ENTRY_LAST_TS(glIndexFormatNV_Idx));


        if(last_diff > 1000000000){
            printf("glIndexFormatNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIndexFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glIndexFormatNV_Idx),
	             GL_ENTRY_CALL_TIME(glIndexFormatNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIndexFormatNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIndexFormatNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIndexFormatNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIndexFormatNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIndexFormatNV_Idx) = get_ts();
        }


	

}