#include <glTraceCommon.h>
#include <generated.h>

#define glMakeTextureHandleResidentNV_wrp						\
    ((void  (*)(GLuint64 handle                                        \
    ))GL_ENTRY_PTR(glMakeTextureHandleResidentNV_Idx))


GLAPI void  APIENTRY glMakeTextureHandleResidentNV(GLuint64 handle)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glMakeTextureHandleResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeTextureHandleResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeTextureHandleResidentNV_wrp(handle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeTextureHandleResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeTextureHandleResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeTextureHandleResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glMakeTextureHandleResidentNV_Idx));


        if(last_diff > 1000000000){
            printf("glMakeTextureHandleResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeTextureHandleResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeTextureHandleResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeTextureHandleResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeTextureHandleResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeTextureHandleResidentNV_Idx) = get_ts();
        }


	

}