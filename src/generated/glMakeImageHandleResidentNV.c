#include <glTraceCommon.h>
#include <generated.h>

#define glMakeImageHandleResidentNV_wrp						\
    ((void  (*)(GLuint64 handle,GLenum access                                        \
    ))GL_ENTRY_PTR(glMakeImageHandleResidentNV_Idx))


GLAPI void  APIENTRY glMakeImageHandleResidentNV(GLuint64 handle,GLenum access)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glMakeImageHandleResidentNV_Idx))
	{
            GL_ENTRY_PTR(glMakeImageHandleResidentNV_Idx) = dlsym(RTLD_NEXT,"glMakeImageHandleResidentNV");
            if(!GL_ENTRY_PTR(glMakeImageHandleResidentNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glMakeImageHandleResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glMakeImageHandleResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	glMakeImageHandleResidentNV_wrp(handle,access);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glMakeImageHandleResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glMakeImageHandleResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glMakeImageHandleResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glMakeImageHandleResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glMakeImageHandleResidentNV_Idx));
        if(last_diff > 1000000000){
            printf("glMakeImageHandleResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glMakeImageHandleResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeImageHandleResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glMakeImageHandleResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glMakeImageHandleResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glMakeImageHandleResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glMakeImageHandleResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glMakeImageHandleResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glMakeImageHandleResidentNV_Idx) = get_ts();
        }


	

}