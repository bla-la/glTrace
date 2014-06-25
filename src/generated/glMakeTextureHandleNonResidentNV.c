#include <glTraceCommon.h>
#include <generated.h>

#define glMakeTextureHandleNonResidentNV_wrp						\
    ((void  (*)(GLuint64 handle                                        \
    ))GL_ENTRY_PTR(glMakeTextureHandleNonResidentNV_Idx))


GLAPI void  APIENTRY glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMakeTextureHandleNonResidentNV_Idx))
	{
            GL_ENTRY_PTR(glMakeTextureHandleNonResidentNV_Idx) = dlsym(RTLD_NEXT,"glMakeTextureHandleNonResidentNV");
            if(!GL_ENTRY_PTR(glMakeTextureHandleNonResidentNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMakeTextureHandleNonResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeTextureHandleNonResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeTextureHandleNonResidentNV_wrp(handle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeTextureHandleNonResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeTextureHandleNonResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeTextureHandleNonResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glMakeTextureHandleNonResidentNV_Idx));
        if(last_diff > 1000000000){
            printf("glMakeTextureHandleNonResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeTextureHandleNonResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeTextureHandleNonResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeTextureHandleNonResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeTextureHandleNonResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeTextureHandleNonResidentNV_Idx) = get_ts();
        }


	

}