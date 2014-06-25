#include <glTraceCommon.h>
#include <generated.h>

#define glIsTextureHandleResidentNV_wrp						\
    ((GLboolean  (*)(GLuint64 handle                                        \
    ))GL_ENTRY_PTR(glIsTextureHandleResidentNV_Idx))


GLAPI GLboolean  APIENTRY glIsTextureHandleResidentNV(GLuint64 handle)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsTextureHandleResidentNV_Idx))
	{
            GL_ENTRY_PTR(glIsTextureHandleResidentNV_Idx) = dlsym(RTLD_NEXT,"glIsTextureHandleResidentNV");
            if(!GL_ENTRY_PTR(glIsTextureHandleResidentNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsTextureHandleResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsTextureHandleResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsTextureHandleResidentNV_wrp(handle);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsTextureHandleResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsTextureHandleResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsTextureHandleResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsTextureHandleResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glIsTextureHandleResidentNV_Idx));
        if(last_diff > 1000000000){
            printf("glIsTextureHandleResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsTextureHandleResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsTextureHandleResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsTextureHandleResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsTextureHandleResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsTextureHandleResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsTextureHandleResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsTextureHandleResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsTextureHandleResidentNV_Idx) = get_ts();
        }


	return retval;

}