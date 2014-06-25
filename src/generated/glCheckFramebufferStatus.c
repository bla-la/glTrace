#include <glTraceCommon.h>
#include <generated.h>

#define glCheckFramebufferStatus_wrp						\
    ((GLenum  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glCheckFramebufferStatus_Idx))


GLAPI GLenum  APIENTRY glCheckFramebufferStatus(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCheckFramebufferStatus_Idx))
	{
            GL_ENTRY_PTR(glCheckFramebufferStatus_Idx) = dlsym(RTLD_NEXT,"glCheckFramebufferStatus");
            if(!GL_ENTRY_PTR(glCheckFramebufferStatus_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCheckFramebufferStatus_Idx))
    	{
            GL_ENTRY_PREV_TS(glCheckFramebufferStatus_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glCheckFramebufferStatus_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCheckFramebufferStatus_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCheckFramebufferStatus_Idx) ++;

        GL_ENTRY_LAST_TS(glCheckFramebufferStatus_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCheckFramebufferStatus_Idx),
				 GL_ENTRY_LAST_TS(glCheckFramebufferStatus_Idx));
        if(last_diff > 1000000000){
            printf("glCheckFramebufferStatus %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatus_Idx),
	             GL_ENTRY_CALL_TIME(glCheckFramebufferStatus_Idx),
	             GL_ENTRY_CALL_TIME(glCheckFramebufferStatus_Idx) /
	             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatus_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCheckFramebufferStatus_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatus_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCheckFramebufferStatus_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCheckFramebufferStatus_Idx) = get_ts();
        }


	return retval;

}