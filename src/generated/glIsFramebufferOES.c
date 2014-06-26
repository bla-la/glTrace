#include <glTraceCommon.h>
#include <generated.h>

#define glIsFramebufferOES_wrp						\
    ((GLboolean  (*)(GLuint framebuffer                                        \
    ))GL_ENTRY_PTR(glIsFramebufferOES_Idx))


GLAPI GLboolean  APIENTRY glIsFramebufferOES(GLuint framebuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsFramebufferOES_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsFramebufferOES_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsFramebufferOES_wrp(framebuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsFramebufferOES_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsFramebufferOES_Idx) ++;

        GL_ENTRY_LAST_TS(glIsFramebufferOES_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsFramebufferOES_Idx),
				 GL_ENTRY_LAST_TS(glIsFramebufferOES_Idx));


        if(last_diff > 1000000000){
            printf("glIsFramebufferOES %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsFramebufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glIsFramebufferOES_Idx),
	             GL_ENTRY_CALL_TIME(glIsFramebufferOES_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsFramebufferOES_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsFramebufferOES_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsFramebufferOES_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsFramebufferOES_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsFramebufferOES_Idx) = get_ts();
        }


	return retval;

}