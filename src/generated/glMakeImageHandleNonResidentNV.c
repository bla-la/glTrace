#include <glTraceCommon.h>
#include <generated.h>

#define glMakeImageHandleNonResidentNV_wrp						\
    ((void  (*)(GLuint64 handle                                        \
    ))GL_ENTRY_PTR(glMakeImageHandleNonResidentNV_Idx))


GLAPI void  APIENTRY glMakeImageHandleNonResidentNV(GLuint64 handle)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMakeImageHandleNonResidentNV_Idx))
	{
            GL_ENTRY_PTR(glMakeImageHandleNonResidentNV_Idx) = dlsym(RTLD_NEXT,"glMakeImageHandleNonResidentNV");
            if(!GL_ENTRY_PTR(glMakeImageHandleNonResidentNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMakeImageHandleNonResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeImageHandleNonResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeImageHandleNonResidentNV_wrp(handle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeImageHandleNonResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeImageHandleNonResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeImageHandleNonResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glMakeImageHandleNonResidentNV_Idx));
        if(last_diff > 1000000000){
            printf("glMakeImageHandleNonResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeImageHandleNonResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeImageHandleNonResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeImageHandleNonResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeImageHandleNonResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeImageHandleNonResidentNV_Idx) = get_ts();
        }


	

}