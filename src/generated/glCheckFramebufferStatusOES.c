#include <glTraceCommon.h>
#include <generated.h>

#define glCheckFramebufferStatusOES_wrp						\
    ((GLenum  (*)(GLenum target                                        \
    ))GL_ENTRY_PTR(glCheckFramebufferStatusOES_Idx))


GLAPI GLenum  APIENTRY glCheckFramebufferStatusOES(GLenum target)
{
	struct timespec st,ed;

	if(!GL_ENTRY_PTR(glCheckFramebufferStatusOES_Idx))
	{
            GL_ENTRY_PTR(glCheckFramebufferStatusOES_Idx) = dlsym(RTLD_NEXT,"glCheckFramebufferStatusOES");
            if(!GL_ENTRY_PTR(glCheckFramebufferStatusOES_Idx))
                abort();
	}


	if( !GL_ENTRY_PREV_TS(glCheckFramebufferStatusOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glCheckFramebufferStatusOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLenum  retval = glCheckFramebufferStatusOES_wrp(target);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glCheckFramebufferStatusOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glCheckFramebufferStatusOES_Idx) ++;

        GL_ENTRY_LAST_TS(glCheckFramebufferStatusOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glCheckFramebufferStatusOES_Idx),
				 GL_ENTRY_LAST_TS(glCheckFramebufferStatusOES_Idx));
        if(last_diff > 1000000000){
            printf("glCheckFramebufferStatusOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatusOES_Idx),
	             GL_ENTRY_CALL_TIME(glCheckFramebufferStatusOES_Idx),
	             GL_ENTRY_CALL_TIME(glCheckFramebufferStatusOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatusOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glCheckFramebufferStatusOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glCheckFramebufferStatusOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glCheckFramebufferStatusOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glCheckFramebufferStatusOES_Idx) = get_ts();
        }


	return retval;

}