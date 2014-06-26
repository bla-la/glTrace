#include <glTraceCommon.h>
#include <generated.h>

#define glIsFramebufferEXT_wrp						\
    ((GLboolean  (*)(GLuint framebuffer                                        \
    ))GL_ENTRY_PTR(glIsFramebufferEXT_Idx))


GLAPI GLboolean  APIENTRY glIsFramebufferEXT(GLuint framebuffer)
{
	struct timespec st,ed;

//init on start
	if(!__is_init)
		initCallEntry();

	if( !GL_ENTRY_PREV_TS(glIsFramebufferEXT_Idx))
    	{
            GL_ENTRY_PREV_TS(glIsFramebufferEXT_Idx) = get_ts();
        }

        clock_gettime(CLOCK_REALTIME,&st);

	GLboolean  retval = glIsFramebufferEXT_wrp(framebuffer);

        clock_gettime(CLOCK_REALTIME,&ed);

        GL_ENTRY_CALL_TIME(glIsFramebufferEXT_Idx) += ts_diff(&st,&ed);
        GL_ENTRY_CALL_COUNT(glIsFramebufferEXT_Idx) ++;

        GL_ENTRY_LAST_TS(glIsFramebufferEXT_Idx) = get_ts();
        long long last_diff = get_ns_diff(GL_ENTRY_PREV_TS(glIsFramebufferEXT_Idx),
				 GL_ENTRY_LAST_TS(glIsFramebufferEXT_Idx));


        if(last_diff > 1000000000){
            printf("glIsFramebufferEXT %lld %lld avg %lld  total time left %lld pct %f\n",
	             GL_ENTRY_CALL_COUNT(glIsFramebufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsFramebufferEXT_Idx),
	             GL_ENTRY_CALL_TIME(glIsFramebufferEXT_Idx) /
	             GL_ENTRY_CALL_COUNT(glIsFramebufferEXT_Idx),
	             last_diff,GL_ENTRY_CALL_TIME(glIsFramebufferEXT_Idx)/ (last_diff/100.0));
             GL_ENTRY_CALL_COUNT(glIsFramebufferEXT_Idx) = 0;
             GL_ENTRY_CALL_TIME(glIsFramebufferEXT_Idx)  = 0;
	     GL_ENTRY_PREV_TS(glIsFramebufferEXT_Idx) = get_ts();
        }


	return retval;

}