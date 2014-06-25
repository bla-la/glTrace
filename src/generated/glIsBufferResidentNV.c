#include <glTraceCommon.h>
#include <generated.h>

#define glIsBufferResidentNV_wrp						\
    ((GLboolean  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glIsBufferResidentNV_Idx))


GLAPI GLboolean  APIENTRY glIsBufferResidentNV(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glIsBufferResidentNV_Idx))
	{
            GL_ENTRY_PTR(glIsBufferResidentNV_Idx) = dlsym(RTLD_NEXT,"glIsBufferResidentNV");
            if(!GL_ENTRY_PTR(glIsBufferResidentNV_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glIsBufferResidentNV_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsBufferResidentNV_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsBufferResidentNV_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsBufferResidentNV_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsBufferResidentNV_Idx) ++;

        GL_ENTRY_LAST_TS(glIsBufferResidentNV_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsBufferResidentNV_Idx),
				 GL_ENTRY_LAST_TS(glIsBufferResidentNV_Idx));
        if(last_diff > 1000000000){
            printf("glIsBufferResidentNV %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsBufferResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsBufferResidentNV_Idx),
	             GL_ENTRY_CALL_TIME(glIsBufferResidentNV_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsBufferResidentNV_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsBufferResidentNV_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsBufferResidentNV_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsBufferResidentNV_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsBufferResidentNV_Idx) = get_ts();
        }


	return retval;

}